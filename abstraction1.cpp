#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int base,exp;
	cout<<"\n Enter base : ";
	cin>>base;
	cout<<"\n Enter power : ";
	cin>>exp;
	int res = pow(base,exp);
	cout<<"\n result is : "<<res<<endl;
	return 0;
}
