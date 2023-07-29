#include <ctime>
#include <iostream>
using namespace std;

class A
{
    int a;
public:
    A (int x=0) : a(x) {}

    void disp(){
        cout<<"a : "<< a <<endl;
    }

    friend A operator - (A &ob);
};


A operator - (A &ob)
{
    ob.a*=-1;
    return ob;
}

int main(){

    A ob1(3);
    A ob2 = -ob1;
    ob1.disp();


    return 0;
}
