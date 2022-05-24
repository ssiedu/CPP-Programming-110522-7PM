#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],temp[3][3];
	int r,c,i,j;
	
	cout<<"\n Enter number of rows : ";
	cin>>r;
	cout<<"\n Enter number of column : ";
	cin>>c;
	
	cout<<"\n Enter the first matrix elements : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"\n Enter the second matrix elements : \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"\n swapping of matrix :\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			temp[i][j] = a[i][j];
			a[i][j]  =   b[i][j];
			b[i][j]  = temp[i][j];
		}
	}
	cout<<"\n matrix first \n ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<a[i][j];
		
		}
		cout<<"\n\n";
	}
	cout<<"\n second matrix \n ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\n\n";
	}
	return 0;
}
