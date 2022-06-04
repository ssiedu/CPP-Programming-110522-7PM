#include<iostream>
using namespace std;
int count=0;
class alpha
{
	public:
		alpha()
		{
			count++;
			cout<<"\n Number of object created :"<<count<<endl;
		}
		~alpha()
		{
			count--;
			cout<<"\n Number of object destroyed : "<<count<<endl;
		}
};
int main()
{
	cout<<"\n In main function : ";
	alpha A1,A2,A3,A4;
	{
		cout<<"\n In Block One : ";
		alpha A5;
	}
	{
		cout<<"\n In block Two :";
		alpha A6;
	}
	cout<<"\n Re-enter in Main : ";
	return 0;
}
