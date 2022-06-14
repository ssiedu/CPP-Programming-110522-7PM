#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20];
	char str2[20];
	
	cout<<"\n Enter str1 :";
	cin.getline(str1,6);
	cout<<"\n Enter str2 : ";
	cin.getline(str2,6);
	cout<<"\n str1 is : "<<str1<<endl;
	cout<<"\n str2 is : "<<str2<<endl;
	return 0;
}
