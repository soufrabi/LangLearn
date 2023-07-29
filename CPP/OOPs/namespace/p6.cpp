#include <iostream>
using namespace std;


//using declaration


namespace ns1 {int a, b;}
namespace ns2 {int a, b;}


int main(){

    using::ns1::a;
    a=10;

    using ns2::b;
    b=20;

    return 0;
}
