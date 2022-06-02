#include<iostream>
using namespace std;
class Employee
{
	public :
		int age;
		Employee(int a) // parameterized constructor
		{
			age = a;
		}
		Employee(const Employee &y)
		{
			age = y.age;
		}
};
int main()
{
	Employee e(40);
	Employee e1(e);
	cout<<"\n e age is : "<<e.age<<endl;
	cout<<"\n e1 age is : "<<e1.age<<endl;
	return 0;
	
}
