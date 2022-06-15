#include<iostream>
using namespace std;
template<class T>T add(T &a, T &b)
{
	T result= a+b;
	return result;
}
int main()
{
	int i =3;
	int j =4;
	float m = 3.2;
	float n = 2.1;
	
	cout<<"\n addition of integer value :"<<add(i,j)<<endl;
	cout<<"\n addition of float value : "<<add(m,n)<<endl;
	return 0;
}
