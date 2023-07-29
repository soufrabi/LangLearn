#include <bits/stdc++.h>
using namespace std;


template<class T>
T fun(T arg){

	return arg*arg;

}

template<class T>
T large(T n1,T n2){

	return n1>n2 ? n1 :n2;

}
int main(){

	float x,y;
	cin>>x>>y;

	cout<<fun(x)<<endl;
	cout<<large(x, y)<<endl;

	return 0;
}
