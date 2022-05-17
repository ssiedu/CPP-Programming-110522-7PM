#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"Enter the value of a : ";cin>>a;
	cout<<"Enter the value of b : ";cin>>b;
	cout<<"Enter the value of c : ";cin>>c;
	if(a>b && a>c)
	max =a;
	//cout<<"a is largest value "<<a<<endl;
	else if(b>c)
	max=b;
	//cout<<"b is largest value "<<b<<endl;
	else
	max=c;
	cout<<"largest value "<<max<<endl;
	return 0;
}
