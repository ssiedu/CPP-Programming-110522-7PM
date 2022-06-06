#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
		public:
			void getdata(int x, int y)
			{
				a=x;
				b=y;
			}
};
class B : public A
{
	protected :
		int sum;
		public :
			getsum()
			{
				sum = a+b;
			}
};
class C : public B
{
	public:
	void display()
	{
		cout<<"\n sum is : "<<sum<<endl;
	}
};
int main()
{
	C obj;
	int m,n;
	cout<<"\n Enter the value of m and n : ";
	cin>>m>>n;
	obj.getdata(m,n);
	obj.getsum();
	obj.display();
	return 0;
}








