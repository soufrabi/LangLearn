#include <iostream>
using namespace std;

//using directive

namespace ns1 {int a,b;}
namespace ns2 {int a,b;}

int main(){

using namespace ns1;
//
a=10;
b=20;

// using namespace ns2;

// Drawback we cannot use 'using' directive for
// two namespaces having same membr variables or functions
//
//  actually we can use the using directive twice 
//  as long as the common variables are not called

a=1;
b=2;


    return 0;
}
