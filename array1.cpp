#include<iostream>
using namespace std;
int main()
{
	int arr[50];
	int i,n,sum=0;
	cout<<"\n Enter array size : ";
	cin>>n;
	cout<<"\n Enter array elements : ";
	for(i=0;i<n;i++)
	{
	cin>>arr[i];
	
	}
	for(i=0;i<n;i++)
	sum = sum+arr[i];
	cout<<"\n sum of arr element : "<<sum<<endl;
	return 0;
}
