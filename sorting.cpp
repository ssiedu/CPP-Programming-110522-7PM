#include<iostream>
using namespace std;
int main()
{
	int arr[20];
	int i,j,n;
	cout<<"\n Enter the size of array : ";
	cin>>n;
	cout<<"\n Enter elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i]  = arr[j];
				arr[j]  = temp;
			}
		}
	}
	cout<<" array elements are : \n";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<arr[i]<<endl;
	}
	return 0;
}
