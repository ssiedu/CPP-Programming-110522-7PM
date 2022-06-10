#include<iostream>
using namespace std;
class A
{
	public:
		void display()
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
	B obj;
	A obj1;
	obj.A::display();
	obj.display();
	return 0;
}
