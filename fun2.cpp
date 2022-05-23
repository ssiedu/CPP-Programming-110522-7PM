//function with argument and without return value
#include<iostream>
using namespace std;
void square(int n);
int main()
{
	int num;
	cout<<"\n Enter Number : ";
	cin>>num;
	square(num);
	return 0;
}
void square(int n)
{
	cout<<"\n square is : "<<n*n<<endl;
}
