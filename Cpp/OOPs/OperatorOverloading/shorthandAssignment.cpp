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

    void operator+=(Number &ob){
        a+=ob.a;
    }


};

int main(){

    Number n1(10),n2(7);
    n1+=n2;
    
    // basically means  n1.operator+=(n2)
    // change reflected in n1

    n1.disp();



    return 0;
}
