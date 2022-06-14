#include<iostream>
using namespace std;
int main()
{
	string str1="Hello";
	string str2="World";
	string str3;
	int len;
	
	str3 = str1;
	cout<<"\n str3 is : "<<str3<<endl;
	
	str3 = str1+" "+str2;
	cout<<"\n str3 is : "<<str3<<endl;
	
	len = str1.size();
	cout<<"\n str1 len is : "<<len<<endl;
	
	return 0;	
	
	
}
