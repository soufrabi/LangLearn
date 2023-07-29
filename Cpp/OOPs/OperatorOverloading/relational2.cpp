#include <iostream>
using namespace std;

class Number{
    int a;
public:
    Number(int x=0):a(x){}

    friend bool operator > (const Number &ob1, const  Number & ob2) ;
};

bool operator > (const Number &ob1, const Number& ob2){
    return ob1.a > ob2.a;
}

int main(){
    Number n1(5),n2(3);

    if(n1>n2){
        cout<<"Greater than"<<endl;
    }
    else{
        cout<<"Not Greater than"<<endl;
    }

    return 0;
}
