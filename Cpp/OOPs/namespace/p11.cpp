#include <iostream>
using namespace std;

namespace ns1 {
    void f(){
        cout<<"f : ns1" << endl;
    }
}

namespace ns2 {
    void f(int a ){
        cout<<"f : "<<a<<" :: ns2" <<endl;
    }
}

int main(){

    using namespace ns1;
    f();

    using namespace ns2;
    f(10); //no error as there is no ambiguity


    return 0;
}
