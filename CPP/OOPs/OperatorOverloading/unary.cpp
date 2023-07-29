#include <ctime>
#include <iostream>
using namespace std;

class A
{
    int a;
public:
    A (int x=0) : a(x) {}

    A operator - (){
        a*=-1;
        return *this;
    }

    void disp(){
        cout<<"a : "<< a <<endl;
    }
};


int main(){

    A ob1(3);
    A ob2 = -ob1;
    ob1.disp();


    return 0;
}
