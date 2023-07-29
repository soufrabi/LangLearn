#include <iostream>
using namespace std;

class Number
{
    int a;
public:
    Number(int a=0){
        this->a=a;
    }
    void display(){
        cout<<"a = "<<a <<endl;
    }
    Number operator + (const Number &ob){
        Number temp(this->a+ob.a);
        return temp;
    }

    

};


int main(){

    Number n1(10),n2(5);
    Number n3;
    n3=n1+n2;
    n3.display();

    return 0;
}
