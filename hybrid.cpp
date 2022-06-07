#include<iostream>
using namespace std;
class A
{
	protected:
	int a,b;
	public:
		void getnum(int x, int y)
		{
			a=x;
			b=y;
		}
};
class B : public A
{
	protected:
		int sum;
		public :
			void getsum()
			{
				sum = a+b;
			}
};
class C
{
	protected:
	int m,n,mul;
	public:
		void getnum1(int x, int y)
		{
			m=x;
			n=y;
		}
		void getmul()
		{
			mul=m*n;
		}
};
class D : public B,public C
{
	public:
		void display()
		{
			cout<<"\n Sum of two numbers is : "<<sum<<endl;
			cout<<"\n Mul of two numbers is : "<<mul<<endl;
		}
};

int main()
{
	D d;
	int a,b;
	cout<<"\n Enter two values : ";
	cin>>a>>b;
	d.getnum(a,b);
	d.getsum();
	d.getnum1(a,b);
	d.getmul();
	d.display();
	return 0;
}















