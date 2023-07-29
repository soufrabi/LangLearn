#include <iostream>
using namespace std;

// Unnamed namespace

namespace {
    int x;  // defined in an unnamed namespace
}

int main() {
    x = 42;  // this will work, since we're in the same translation unit
    
    cout<< x <<endl;
    cout << ::x <<endl;

    return 0;
}



