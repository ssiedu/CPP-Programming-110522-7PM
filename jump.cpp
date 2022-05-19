#include<iostream>
using namespace std;
int main()
{
	int i;
	
	for(i=1;i<=20;i++)
	{
		if(i==10)
		goto xyz;//continue;//break;
		cout<<"\n"<<i<<endl;
	}
	xyz: cout<<"\n Use goto"<<endl;
	return 0;
}
