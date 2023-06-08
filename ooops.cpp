
#include <iostream>
using namespace std;

class friendfunc2;

class friendfunc1{
    int a1, a2;
public:
    friendfunc1(int x, int y)
    {
        a1 = x;
        a2 = y;
    }

    friend float average(friendfunc1 f1, friendfunc2 f2);
};

class friendfunc2{
    int a1, a2, a3;
public:
    friendfunc2(int x, int y, int z){
        a1 = x;
        a2 = y;
        a3 = z;
    }
    friend float average(friendfunc1 f1, friendfunc2 f2);
};

float average(friendfunc1 f1, friendfunc2 f2){
    return float((f1.a1 + f1.a2 + f2.a1 + f2.a2 + f2.a3)) / float(5);
}

int main()
{
    friendfunc1 obj1(3, 6);
    friendfunc2 obj2(3, 4, 2);
    float ans = average(obj1, obj2);
    cout << "Average: " << ans << endl;
}