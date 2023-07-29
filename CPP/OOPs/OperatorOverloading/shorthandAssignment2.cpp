#include <iostream>
using namespace std;

// Shorthand assignment operator overloading

class Number{
    int a;
public:
    Number(int a=0){
        this->a=a;
    }
    void disp(){
        cout<<"a = "<< a <<endl;
    }

    friend void operator += (Number &ob1,const Number &ob2)
    {
        ob1.a+=ob2.a;
    };

    //friend function can also be defined inside the class
};



int main(){

    Number n1(2),n2(7);
    n1+=n2;
    
    // basically means  n1.operator+=(n2)
    // change reflected in n1

    n1.disp();
    n2.disp();



    return 0;
}
