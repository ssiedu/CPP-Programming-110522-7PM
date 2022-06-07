#include<iostream>
using namespace std;
class first
{
	protected:
		int a;
		public:
			void getnum(int x)
			{
				a=x;
			}
};
class second
{
	protected:
		int b;
		public:
			void getnum1(int y)
			{
				b=y;
			}
};
class Third
{
	protected:
		int c;
		public:
			void getnum2(int z)
			{
				c=z;
			}
};
class fourth : public first,public second,public Third
{
	int product;
	public:
		void calculate()
		{
			product= a*b*c;
			cout<<"\n product of numbers : "<<product<<endl;
		}
		
};
int main()
{
	fourth f;
	int m,n,o;
	cout<<"\n Entewr the value of m,n,o : ";
	cin>>m>>n>>o;
	f.getnum(m);
	f.getnum1(n);
	f.getnum2(o);
	f.calculate();
	return 0;
}


















