#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[10]="hello";
	char str2[10]="world";
	char str3[20];
	int len;
	
	strcpy(str3,str1);
	cout<<"\n str3 is : "<<str3<<endl;
	
	strcat(str1,str2);
	cout<<"\n str1 is : "<<str1<<endl;
	
	len = strlen(str3);
	cout<<"\n length is : "<<len<<endl;
	
	return 0;
	
	
}
