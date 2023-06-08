#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;

        while(this->next!=NULL){
            this->next=NULL;
            delete next;
        }

        cout<<"memory deleted with value"<< val<<endl;
    }
};

class stack{
    public:
        int size;
        Node*top;

    stack(){
        top=NULL;
        
        size=0;
    }
    Node* front=NULL;
    void push(int data){
        Node* temp=new Node(data);
        
        if(top==NULL){
            top=temp;
        }
        else{
            front->next=temp;
        }
        front=temp;
    }

    void pop(){

        if(top==NULL){
            cout<<"stack overflow";
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }

    int peek(){

        if(top!=NULL){
            return top->data;
        }

        else{
            return -1;
        }

    }

    void isempty(){
        if(top==NULL){
            cout<<"stack empty"<<endl;
        }
        
        else{
            cout<<"stack not empty"<<endl;
        }
    }
};


int main(){
    stack st;
    st.push(7);
    st.push(8);
    st.push(2);
    st.push(6);

    cout<<"top element is "<<st.peek()<<endl;

    st.pop();

    cout<<"top element is "<<st.peek()<<endl;
    st.pop();
    st.isempty();
    st.pop();
    st.pop();

    st.isempty();


    st.pop();

}