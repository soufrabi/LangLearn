#include <iostream>
using namespace std;
/* int a=10; */
/* double a=10.5; */

// we cannot have multiple variables of the same name , or
// multiple functions with  the same name and same signature

//namespace names follow the same naming rules that indentifiers are bound by

namespace ns1{
    int a=1;
    int b=2;
}

namespace ns2{
    int a=5;
    int b;
    //not mandatory to inititialize the variables
}

namespace ns2 {
    void fun(){
        cout<<"ns2::fun()";
    }
}
int main(){

    cout<<ns1::a<<endl;
    cout<<ns2::b<<endl;
    
    ns2::a=50;
    ns2::b=60;
    cout<<ns2::a<<ns2::b<<endl;

    ns2::fun();
    return 0;
} 
