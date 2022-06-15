#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=9;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else if(b>a)
		{
			throw "you can not declare denominator is greater than numerator";
		}
		else
		{
			cout<<"\n value is : "<<a/b<<endl;
		}
	}
	catch(int ex)
	{
		cout<<"\n you can not declare "<< ex <<" as a denominator";
	}
	catch(char const *ex1)
	{
		cout<<ex1;
	}
	return 0;
}
