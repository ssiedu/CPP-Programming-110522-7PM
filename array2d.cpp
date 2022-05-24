#include<iostream>
using namespace std;
int main()
{
	int a[20][20],b[20][20],sum[20][20];
	int r,c,i,j;
	cout<<"\n Enter row : ";
	cin>>r;
	cout<<"\n Enter column : ";
	cin>>c;
	cout<<"\n Enter first matrix element :\n ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\n Enter second matrix elements : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"\n sum is : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<sum[i][j];
		}
		cout<<"\n\n";
	}
	
	return 0;
}
