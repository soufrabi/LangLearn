#include <iostream>
using namespace std;

//Discontinuous namespace
//A namespace can be defined in several parts and so
//it is made up of the sum of its separately defined parts.
//The separate parts of a namespace can be spread over
//multiple files
//
//All the files in C++ standard library
//declared all of its entities within the "std" namespace
//
//This is why we generally include the namespace "std"
//with the help of using directive
//using namespace std;

namespace one {
    int p;
}

namespace two {
    using namespace one;
    namespace intwo
    {
        int q=10;
    }
    int r=20;
}

int main(){

    using namespace two;
    p=100;
    
    cout<<intwo::q;
    cout<<r;

    using namespace two::intwo;
    //import the inner namespace specifically
    cout<<q;
    //can access the variable q without using 
    //the namespace operator


    return 0;
}
