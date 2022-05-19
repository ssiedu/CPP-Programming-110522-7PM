#include<iostream>
using namespace std;
int main()
{
	int n1=0,n2=1,n3,num,i;
	cout<<"\n Enter Number : ";
	cin>>num;
	cout<<n1<<"\t"<<n2;
	i=2;
	while(i<num)
	{
		n3= n1+n2;
		cout<<"\t"<<n3;
		n1 = n2;
		n2=n3;
		i++;
	}
	return 0;
}
