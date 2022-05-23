//function with argument and with return value
#include<iostream>
using namespace std;
float avg(float a,float b);
int main()
{
	float x,y,res;
	cout<<"\n Enter the value of x : ";
	cin>>x;
	cout<<"\n Enter the value of y : ";
	cin>>y;
	res= avg(x,y);
	cout<<"\n average of number is : "<<res<<endl;
	return 0;
}
float avg (float a, float b)
{
	return (a+b)/2;
}
