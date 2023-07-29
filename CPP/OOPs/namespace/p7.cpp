#include <iostream>
using namespace std;


//using declaration

namespace ns1 {int a, b;}
namespace ns2 {int a, b;}


int main(){

    using namespace ns1;
    a=1;
    ns1::b=2;

    using ns2::a;
    using ns2::b; //greater priority
    a=10;//no error
    b=20;//ns1 namespace overridden

    return 0;
}
