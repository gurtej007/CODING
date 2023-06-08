#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top ;
    int size;
    stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }

    void push(int data){

        top+=1;
        if(top==size){
            cout<<"stack full"<<"\n";
        }
        else
            arr[top]=data;
    }

    void pop(){

        if(top==-1){
            cout<<"stack underflow"<<"\n";
        }
        else{
            top-=1;
        }
    }

    int peek(){

        if(top==-1){
            return -1;
        }
        return arr[top];
    }


};
int main(){

    stack st(5);
    st.push(8);
    st.push(7);
    st.push(9);
    st.push(3);
    st.push(5);
    st.push(1);
    cout<<st.peek()<<"\n";
    st.pop();

    cout<<st.peek()<<"\n";


}