#include <iostream>
using namespace std;

// Logical Operator overloading

class Number{
    int a;
public:
    Number(int a=0){
        this->a=a;
    }
    void display(){
        cout<<"a = "<< a << endl;
    }
    Number operator&& (Number &ob){
        return a && ob.a;
    }
};
int main(){
    
    Number n1(2), n2(5);
    Number n3 = n1 && n2;
    n3.display();
    


    return 0;
}
