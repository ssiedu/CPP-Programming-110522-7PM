#include<iostream>
using namespace std;
int main()
{
	int num=0,i,sum=0;
	do
	{
		cout<<"\n Enter number ";
		cin>>num;
		sum= sum+num;
	}while(num!=0);
	cout<<"\n sum is "<<sum<<endl;
	return 0;
	
}
