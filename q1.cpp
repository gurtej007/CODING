#include <iostream>
using namespace std;
class Gurtej{
    public:
    string name,surname, result, gender;
    int total_marks; 
};
 
int main(){
    Gurtej G;
    cout<<"Enter your name: ";
    cin>>G.name;
    cout<<"Enter your surname: ";
    cin>>G.surname;
    cout<<"Enter your Total Marks: ";
    cin>>G.total_marks;
    cout<<"Enter your Gender: ";
    cin>>G.gender;
    cout<<"Enter your Result: ";
    cin>>G.result;
    
    cout<<"Full Name: "<<G.name<<" "<<G.surname<<endl;
    cout<<"Result: "<<G.result<<endl;
    cout<<"Total Marks: "<<G.total_marks<<endl;
    cout<<"Gender(M/F): "<<G.gender<<endl;
    return 0;
}
