#include<iostream>
using namespace std;
class student
{
	
	int rollno;
	char name[25];
	float marks;
	public:
	void getdata()
	{
		cout<<"\n Enter student rollno : ";
		cin>>rollno;
		cout<<"\n Enter student name : ";
		cin>>name;
		cout<<"\n Enter student marks : ";
		cin>>marks;
	}
	void display()
	{
		cout<<"\n Student rollno : "<<rollno;
		cout<<"\n student name   : "<<name;
		cout<<"\n student marks  : "<<marks;
	}
	
};  // global decration
int main()
{
	student stu;  // local declaration
	stu.getdata();
	stu.display();
	return 0;
}






