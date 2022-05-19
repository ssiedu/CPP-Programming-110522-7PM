#include<iostream>
using namespace std;
int main()
{
	int num,i,flag=0;
	cout<<"\n Enter number : ";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
		   flag=1;
		   break;	
		}
	}
	if(flag == 0)
	cout<<"\n Number is prime "<<endl;
	else
	cout<<"\n Number is not prime"<<endl;
	return 0;
}
