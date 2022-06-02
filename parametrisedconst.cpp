#include<iostream>
using namespace std;
class Employee
{
	public:
		int age;
		Employee(int x)
		{
			age=x;
		}
};
int main()
{
	Employee e(30);
	Employee e1(40);
	Employee e2(50);
	cout<<"\n age is e : "<<e.age<<endl;
	cout<<"\n e1 age is : "<<e1.age<<endl;
	cout<<"\n e2 age is : "<<e2.age<<endl;
	return 0;
}
