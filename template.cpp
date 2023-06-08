#include<iostream>
using namespace std;

template<class t>

class Stack{

    t *arr;
    int size;
    int top=0;
    public:
        Stack(int s){
            this->size=s;
            arr=new t(size);
        }
        void push(t x){ 
            if(top==size){
                cout<<"stack overflow"<<"\n";
                return ;
            }
            if(top==0){
                arr[top]=x;

            }
            else{
                top++;
                arr[top]=x;
            }
            
            
        }    
        void pop(){
            if(top<0){
                cout<<"stack underflow"<<"\n";
                return ;
            }
            top-=1;
        }
        t peek(){
            if(top<0){
                cout<<"stack empty"<<"\n";
                return -1;
            }
            return arr[top];
        }
};

int main(){
    Stack<float> st(5);
    st.push(4.6);
    cout<<st.peek()<<"\n";
    st.push(1.9);
    st.push(8.1);
    st.push(9.5);
    cout<<st.peek()<<"\n";
    st.pop();
    cout<<st.peek()<<"\n";
    st.push(2);
    st.push(3);
    st.push(7);
}