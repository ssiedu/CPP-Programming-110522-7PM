//call by address
#include<iostream>
using namespace std;
void exchange(int *a, int *b);
int main()
{
	int a,b;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	exchange(&a,&b);
	return 0; 
}
void exchange(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	cout<<"\n a : "<<*a<<"\n b : "<<*b<<endl;
	
}
