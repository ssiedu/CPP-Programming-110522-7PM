#include<iostream>
using namespace std;
int main()
{
	int a[20][20],b[20][20],mul[20][20];
	int r,c,i,j,k;
	cout<<"\n Enter row : ";
	cin>>r;
	cout<<"\n Enter column : ";
	cin>>c;
	
	cout<<"\n Enter first matrix element :\n ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\n element a "<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
	}
	cout<<"\n Enter second matrix elements : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\n element b "<<i+1<<j+1<<":";
			cin>>b[i][j];
		}
	}
	cout<<"\n multiplication is : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
			mul[i][j] = mul[i][j] + a[i][k] * b[k][j];	
			}
			
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<mul[i][j];
		}
		cout<<"\n\n";
	}
	
	return 0;
}
