#include <iostream>
using namespace std;

template<typename T>
void print(T arg)
{
  cout<< arg <<endl;

}

void foo(int a){}

template <typename T1, typename T2>
void foo2(T1,T2){}

int main(){

  print(42);

  print<void(*)(int)>(&foo);
  print<void(*)(int,int)>(&foo2<int,int>);


  return 0;
}
