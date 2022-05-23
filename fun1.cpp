//function without argument and withour return value
#include<iostream>
using namespace std;
void sum();  // function declaration
int main()
{
	sum();
	return 0;
}
void sum()
{
	int a,b;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	cout<<"\n Addition is : "<<a+b<<endl;
}
