#include <iostream>
using namespace std;

// Generic Programming


template<class T>
T sum(T a, T b)
{
	return a+b;
}


int main(){

	cout<< sum<int>(2.5,3.0) <<endl;


	return 0;
}
