#include<iostream>
using namespace std;
int product(int a , int b)
{
	return a*b;
}
float product(float a,float b)
{
	return a*b;
}
int product(int a, int b, int c)
{
	return a*b*c;
}
int main()
{
	cout<<"\n product of two integer arg : "<<product(2,3)<<endl;
	cout<<"\n product of two double arg  : "<<product(2.3f,3.1f)<<endl;
	cout<<"\n product of Three int arg   : "<<product(2,3,4)<<endl;
	return 0;
}
