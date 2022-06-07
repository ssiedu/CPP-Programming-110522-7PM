#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
		public:
			void getnum(int x , int y)
			{
				a=x;
				b=y;
			}
};
class B : public A
{
	int sum;
	public:
		void getsum()
		{
			sum=a+b;
			cout<<"\n sum is : "<<sum<<endl;
		}
};
class C : public A
{
	int mul;
	public:
		void getmul()
		{
			mul=a*b;
			cout<<"\n Mul is : "<<mul<<endl;
		}
};
class D : public A
{
	int sub;
	public:
		void getsub()
		{
			sub=a-b;
			cout<<"\n sub is : "<<sub<<endl;
		}
};
int main()
{
	B obj;
	C obj1;
	D obj2;
  int m,n;
  cout<<"\n Enter the value of m,n : ";
  cin>>m>>n;
  obj.getnum(m,n);
  obj.getsum();
  obj1.getnum(m,n);
  obj1.getmul();
  obj2.getnum(m,n);
  obj2.getsub();
  return 0;	
	
	
}





