#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\n Enter number of student : ";
	cin>>num;
	float *ptr;
	ptr = new float(num);
	cout<<"\n Enter cgpa of students : ";
	for(int i=0;i<num;i++)
	{
		cin>>*(ptr+i);
	}
	cout<<"\n Display student marks : ";
	for(int i=0;i<num;i++)
	{
		cout<<"\n student "<<i+1<<":"<<*(ptr+i)<<endl;
	}
	delete[]ptr;
	return 0;
}
