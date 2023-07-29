#include <iostream>
using namespace std;

template<typename T=int,int N=3>
void loop(T x)
{
	for (int i = 0; i < N; i++) 
	{
		cout<< x <<endl;
	}

}


int main(){

	// loop<float>(5.5,4);
	loop<float,4>(1.5);
	loop<int>(100);
	loop (5.7);
	// loop(10,4);
	// loop<4.5>(5);
	
	// float x=2;
	// const int n=3;
	// loop<float,4>(x,n);


	return 0;
}
