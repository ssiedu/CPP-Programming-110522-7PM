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
			cout<<"\n Enter id : ";
			cin>>id;
			cout<<"\n Enter name : ";
			cin>>name;
			cout<<"\n Enter salary : ";
			cin>>sal;
		}
		void display()
		{
			cout<<"\n Person id : "<<id<<endl;
			cout<<"\n Person Name : "<<name<<endl;
			cout<<"\n Person salary : "<<sal<<endl;
		}
		
};
int main()
{
	Person p[3];
	int i;
	cout<<"\n Enter the details of person : \n";
	for(i=0;i<3;i++)
	{
		p[i].getdata();
	}
	cout<<"\n Details of person : \n";
	for(i=0;i<3;i++)
	{
		p[i].display();
	}
	return 0;
}
