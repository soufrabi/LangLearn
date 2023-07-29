#include <iostream>
using namespace std;

namespace ns1
{
    int a;
    namespace ns2
    {
        int a;
        int b;
    }
}

int main(){

    using namespace ns1;
    a=10; //ns1::a=10
    ns2::a=20; //ns1::ns2::a=20
    
    using namespace ns2;
    //won't throw an error
    //but, it will cause ambiguity and then error
    //if common variables/methods are called

    return 0;
}
