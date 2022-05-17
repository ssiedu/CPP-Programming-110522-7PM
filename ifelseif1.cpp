#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the value of a : ";cin>>a;
	cout<<"Enter the value of b : ";cin>>b;
	cout<<"Enter the value of c : ";cin>>c;
	if(a>b && a>c)
	cout<<"a is largest value "<<a<<b<<c<<endl;
	else if(b>c)
	cout<<"b is largest value "<<b<<endl;
	else
	cout<<"c is largest value "<<c<<endl;
	return 0;
}
