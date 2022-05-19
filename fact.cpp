#include<iostream>
using namespace std;
int main()
{
	int num,i,f=1;
	cout<<"\n Enter Number : ";
	cin>>num; // 5
	for(i=1;i<=num;i++)
	{
		f = f *i;
	}
	cout<<"\n factorial is : "<<f<<endl;
	return 0;
}
