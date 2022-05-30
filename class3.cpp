#include<iostream>
using namespace std;
class student 
{
	int rollno;
	char name[25];
	public : 
	void getdata();
	void display();
}s;//global

void student :: getdata()
{
	cout<<"\n Enter rollno : ";
	cin>>rollno;
	cout<<"\n Enter name : ";
	cin>>name;
}

void student :: display()
{
	cout<<"\n student roll no : "<<rollno<<endl;
	cout<<"\n student name : "<<name<<endl;
}

int main()
{
	//student s; // local
	s.getdata();
	s.display();
	return 0;
}



