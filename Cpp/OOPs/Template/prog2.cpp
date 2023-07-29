#include <iostream>
using namespace std;

// Class Template

template <class T>
class A{
	T x;

public:

	A(T a):x(a){}

	void print(){
		cout<<x<<endl;
	}

	T fun1(T arg){

		return arg*arg*arg;
	}

};

int main(){

	A<int>ob1(3);
	A<float>ob2(4.5);

	ob1.print();
	ob2.print();

	return 0;
}




