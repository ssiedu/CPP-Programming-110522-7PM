#include<iostream>
using namespace std;
int main()
{
	int arr[20];
	int i,n;
	cout<<"\n Enter the size of array : ";
	cin>>n;
	cout<<"\n Array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[0]<arr[i])
		arr[0] = arr[i];
	}
	cout<<"\n largest element : "<<arr[0]<<endl;
	return 0;
}
