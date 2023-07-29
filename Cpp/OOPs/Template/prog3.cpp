#include <bits/stdc++.h>
using namespace std;

template<class T>
class Calculator{
	T n1,n2;
public:
	Calculator(T num1,T num2){
		n1=num1;
		n2=num2;
	}
	T add(){return n1+n2;}
	T subtract(){return n1-n2;}
	T multiply(){return n1*n2;}
};

int main(){

	Calculator<int>ob1(2,3);
	cout<<ob1.add()<<endl;
	cout<<ob1.subtract()<<endl;
	cout<<ob1.multiply()<<endl;
	
    Calculator<float>ob2(3.3,2.1);
	cout<<ob2.add()<<endl;
	cout<<ob2.subtract()<<endl;
	cout<<ob2.multiply()<<endl;
	




	return 0;
}
