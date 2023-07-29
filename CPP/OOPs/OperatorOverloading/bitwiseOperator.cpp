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

    Number operator | (const Number &ob) const
    {
        Number temp(this->a | ob.a);
        return temp;
    }


};


int main(){

    Number n1(3),n2(5);
    Number n3 = n1 | n2;
    n3.display();

    return 0;
}
