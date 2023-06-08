#include <bits/stdc++.h>
using namespace std;

class Emp
{
    
    int salary;
    static int cnt;
    int dcnt;
public:
    
    Emp()
    {
        cout << "constructor"
             << "\n";
        cnt++;
    }
    ~Emp()
    {
        cout << "destructor"
             << "\n";

        
    }
    static void objcnt(){
        cout << "no of objects created" << cnt << endl;
    }
};
int Emp::cnt = 0;
int main()
{
    Emp e1, e2, e3;
    Emp::objcnt();
    Emp e4;
    Emp::objcnt();
}