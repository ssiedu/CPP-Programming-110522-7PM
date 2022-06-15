#include<iostream>
#include<exception>
using namespace std;
class MyException:public exception
{
	public:
		char const *what() const throw()
		{
			return " Attempt by zero ";
		}
};
int main()
{
	try
	{
		int x,y;
		cout<<"\n Enter the value of x and y ";
		cin>>x>>y;
		if(y==0)
		{
			MyException z;
			throw z;
		}
		cout<<"\n value is : "<<x/y<<endl;
	}
	catch(exception &e)
	{
		cout<<e.what();
	}
	return 0;
}
