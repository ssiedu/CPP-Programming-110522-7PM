#include<iostream>
using namespace std;
class student
{
	int age;
	public:
		student()
		{
			age=25;
		}
		void getage()
		{
			cout<<"\n student age is : "<<age<<endl;
		}
};
int main()
{
	student *ptr = new student();
	ptr->getage();
	delete ptr;
	return 0;
}
