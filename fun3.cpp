//function without argument and with return value
#include<iostream>
using namespace std;
int cube();
int main()
{
	int res;
	res = cube();
	cout<<"\n cube is : "<<res<<endl;
	return 0;
}
int cube()
{
	int n;
	cout<<"\n Enter number : ";
	cin>>n;
	return n*n*n;
}
