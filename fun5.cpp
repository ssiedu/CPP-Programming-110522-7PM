//call by value 
#include<iostream>
using namespace std;
void swap(int a, int b);
int main()
{
	int x,y;
	cout<<"\n Enter the value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
	swap(x,y);
	return 0;
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a	 = b;
	b    = temp;
	cout<<"\n a : "<<a<<"\n b : "<<b<<endl;
}
