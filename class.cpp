#include <iostream>
using namespace std;
class employee{
public:
    int empid;
    string empname;
    void getdata(){
        cin>>empid;
        cin>>empname;
    }
    void display(){
        cout<<empid<<" ";
        cout<<empname;
        cout<<"\n";
    }
};
int main() {
	employee emp[6];
	for(int i=0;i<6;i++){
	    cout<<"enter employee no. and name"<<" ";
	    emp[i].getdata();  
	}
	for(int i=0;i<6;i++){
	    emp[i].display();
	}
	return 0;
}