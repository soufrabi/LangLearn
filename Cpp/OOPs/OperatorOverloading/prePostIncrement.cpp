#include <iostream>
using namespace std;

class Number
{
    int a;
public:
    Number(int x=0):a(x) {}

    void display(){
        cout<<"a : "<< a <<endl;
    }
    Number operator ++ (){
        Number t;
        t.a = ++a;
        return t;
        //a++;
        //return *this;
        //saves memory
    }
    //pre-increment
    

    Number operator++(int){
        // we can also write 
        // Number operator++ (int some_variable_name)

        Number t;
        t.a = a++;
        return t;

    }

};


int main(){

    Number n1;

    n1.display();
    n1++.display();
    (++n1).display();

    return 0;
}
