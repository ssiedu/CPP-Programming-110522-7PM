#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=0;
	//int c;
	try
	{
		if(b==0)
		throw b;
		else 
		cout<<"\n c is : "<<a/b<<endl;
	}
	catch(int ex)
	{
		cout<<"\n you can not declare "<< ex <<" as a denominator"<<endl;
			}
	

	return 0;
	
}
