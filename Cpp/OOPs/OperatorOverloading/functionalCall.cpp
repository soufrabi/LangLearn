#include <iostream>
using namespace std;

//Overloading Function call operator


// Overloaded Function call operator must be non-static member function 
// Friend function cannot be uses

class A{
    int a;
public:
    A(int x=0){
        a=x;
        cout << "Inside Constructor"<<endl;
    }

    A operator () (int x) const
    {
        A t;
        t.a = x;
        cout<<"Inside Overloaded Function call Method"<<endl;
        return t;
    }
     
    A operator () (const A &ob) const
    {
        A t;
        t.a=ob.a;
        return t;

    }
    
};


int main(){

    A ob1(3);
    A ob2(4);

    A ob3 = ob1(10);
    // Overloaded Function call will be invoked
    A ob4 = A(11);


    return 0;
}
