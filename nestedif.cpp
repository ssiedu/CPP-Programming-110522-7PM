#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter Number : ";
	cin>>num;
	if(num==0)
	{
		cout<<"\n Number is Zero"<<endl;
	}
	 else if(num>0)
	{
		cout<<"\n Number is positive "<<endl;
		if(num%2==0)
		{
			cout<<"\n Number is even"<<endl;
		}	
		else
		{
			cout<<"\n Number is odd "<<endl;
		}
	}
	else
	{
		cout<<" \n Number is negative "<<endl;
		if(num%2==0)
		{
			cout<<"\n Number is Even"<<endl;
		}
		else
		{
			cout<<"\n Number is odd"<<endl;
		}
		
	}
	return 0;	
}
