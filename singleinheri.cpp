#include<iostream>
using namespace std;
class base
{
protected: 
	int a,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
};
class derived : public base
{
	int sum;
	public :
		void getsum()
		{
			sum = a+b;
			cout<<"\n sum is : "<<sum<<endl;
		}
};
int main()
{
	derived obj;
	int m,n;
	cout<<"\n Enter the value of a and b : ";
	cin>>m>>n;
	obj.getdata(m,n);
	obj.getsum();
	return 0;
}








