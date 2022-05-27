#include<iostream>
using namespace std;
class Person
{
	
	int id;
	char name[25];
	float sal;
	public:
		void getdata()
		{
			cout<<"\n Enter Id : ";
			cin>>id;
			cout<<"\n Enter Name : ";
			cin>>name;
			cout<<"\n Enter salary : ";
			cin>>sal;
		}
		void display()
		{
			cout<<"\n Person Id : "<<id<<endl;
			cout<<"\n Person Name : "<<name<<endl;
			cout<<"\n Person salary : "<<sal<<endl;	
		}
};
int main()
{
	Person p1;
	p1.getdata();
	p1.display();
	return 0;
}
