#include <iostream>
using namespace std;

class Number{
    int a;
public:
    Number(int x=0):a(x){
        ;
    }

    void display(){
        cout<<"a : "<< a <<endl;
    }

    friend Number operator | (const Number &ob1, const Number &ob2);

};

Number operator | (const Number &ob1, const Number &ob2)
{
    Number temp(ob1.a | ob2.a);
    return temp;
}

int main(){

    Number n1(2),n2(5);
    Number n3 = n1 | n2;
    n3.display();

    return 0;
}
