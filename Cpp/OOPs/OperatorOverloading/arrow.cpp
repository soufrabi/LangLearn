#include <ctime>
#include <iostream>
using namespace std;

class A{
    int a;
public:
    A(int x=0):a(x){}

    void disp(){
        cout<<"a : "<< a <<endl;
    }

    A *operator->(){
        cout<<"Overloaded Arrow Function"<<endl;
        return this; 
    }
};


int main(){

    A ob1(11);
    ob1->disp();
    //overloaded arrow function willl be called


    A *ptr= &ob1;
    ptr->disp();
    //overloaded arrow function will NOT be called

    return 0;
}
