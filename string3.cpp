#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[10]="Ram";
	char str2[10]="Ram";
	
	if(strcmp(str1,str2)==0)
	cout<<"\n string are equal"<<endl;
	else
	cout<<"\n string are not equal"<<endl;
	return 0;
}
