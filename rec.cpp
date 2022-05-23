#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	int num,res;
	cout<<"\n Enter number : ";
	cin>>num;
	res = fact(num);
	cout<<"factorial is :"<<res<<endl;
	return 0;
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
