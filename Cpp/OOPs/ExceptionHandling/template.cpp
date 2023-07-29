#include <iostream>
using namespace std;

class SqE {
public:
  SqE() { cout << "Exception Caught" << endl; }
};

template <class T> class Square {
  T s;

public:
  Square(T x) {
    s= (sizeof(x) == 1) ? throw SqE() : x*x;
  }

  void show(){
    cout<< s <<endl;

  }
};

int main() { 

  try{
    Square<int>s1(2);
    s1.show();

    Square<char>s2('A');
    s2.show();

    Square<double>s3(5.5);
    s3.show();

  }
  catch(SqE e){

  }

  return 0; 
}
