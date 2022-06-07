#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<" \n Class A "<<endl;
		}
};
class B
{
	public:
		void display()
		{
			cout<<"\n Class B "<<endl;
		}
};
class C : public A, public B
{
	public:
		void show()
		{
			A::display();
			B::display();
			
		}
};
int main()
{
	C c1;
	c1.show();
	return 0;
}









