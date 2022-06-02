#include<iostream>
using namespace std;
class Employee
{
	public:
	int age;

		Employee()//default constructor
		{
			age=40;
		}
};
int main()
{
	Employee e;
	cout<<"\n age is : "<<e.age<<endl;
	return 0;
}
