#include<iostream>
using namespace std;
class A
{
	public:
		 virtual void display()
		{
			cout<<"\n Display function in a base class ";
		}
};
class B : public A
{
	public:
		void display()
		{
			cout<<"\n Display function in derived class";
		}
};
int main()
{
	A *p;
	B obj;
	p= &obj;
	p->display();
}
