#include <iostream>
using namespace std;

namespace ns1
{
    void f()
    {
        cout<<"f:ns1" <<endl;
    }
}

namespace ns2
{
    void f()
    {
        cout<<"f parameterless : ns2 "<<endl;
    }
    void f(int a)
    {
        cout<<"f parameter : "<<a<<" : ns2 "<<endl;
    }
}


int main(){

   using namespace ns1;
   f();

   // using namespace ns2;
   // even if the above line is left uncommented it won't produce any error
   // f();
   // error collision with ns1::f()

   using ns2::f; //no parameterlist only function name
   f(); // previous namespace gets overridden


    return 0;
}
