#include<iostream>
using namespace std;
inline void square (int n)
{
	cout<<"\n Square is : "<<(n*n)<<endl;
}
int main()
{
	int num;
	cout<<"\n Enter Number : ";
	cin>>num;
	square(num);//cout<<"\n Square is : "<<(n*n)<<endl;
	square(5);//cout<<"\n Square is : "<<(n*n)<<endl;
	square(2);//cout<<"\n Square is : "<<(n*n)<<endl;
	return 0;
	
}
