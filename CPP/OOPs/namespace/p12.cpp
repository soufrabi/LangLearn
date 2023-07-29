#include <iostream>
using namespace std;

//Renaming namespace


namespace ns1
{
    int a;
    void f(){
        cout<<"f:ns1";
    }
}

namespace ns=ns1;

int main(){

    using::ns::a;
    a=5;


    return 0;
}
