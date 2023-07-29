#include <iostream>
using namespace std;

class Number{
    int a;
public:
    Number(int a=0){
        this->a=a;
    }

    void disp(){
        cout<<"a : "<< a <<endl;
    }

    friend Number operator + (const Number &, const Number &);
    
};

Number operator + (const Number &ob1, const Number &ob2){
    Number temp(ob1.a+ob2.a);
    return temp;
}

int main(){

    Number n1(9),n2(3);
    Number n3=n1+n2;
    n3.disp();


    return 0;
}
