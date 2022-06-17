#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	char str[25];
	int i;
	fstream file;
	file.open("Text.txt",ios::in | ios::out | ios::app);
	int len;
	cout<<"\n Enter string : ";
	cin>>str;
	len = strlen(str);
	for(i=0;i<len;i++)
	file.put(str[i]);
	file.seekg(0);
	char ch;
	while(file)
	{
		file.get(ch);
		cout<<ch;
	}
	file.close();
	return 0;
}
