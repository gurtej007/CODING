#include<iostream>
using namespace std;

class heap{
    public:
        int arr[10000];
        int size;
    
    heap(){
         size=0;
         arr[0]=-1;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int root=index/2;

            if(arr[index]>arr[root]){
                swap(arr[index],arr[root]);
                index=root;
            }
            else{
                return ;
            }
        }
    }

    void deletefromheap(){
        arr[1]=arr[size-1];
        size=size-1;

        int i=1;
        while(i<size){
            int left=2*i;
            int right=2*i+1;

            if(arr[left]>arr[i]){
                swap(arr[left],arr[i]);
                i=left;
            }
            else if(arr[right]>arr[i]){
                swap(arr[right],arr[i]);
                i=right;
            }

            else{
                return ;
            }
        
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){

    heap h;

    h.insert(50);
    h.insert(70);
    h.insert(58);
    h.insert(63);
    h.insert(79);

    h.print();
    cout<<"\n";

    h.deletefromheap();
    h.print();
}