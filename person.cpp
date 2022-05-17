#include<iostream>
using namespace std;
class person
{
	int id;
	char name[25];
	float salary;
	public:
		void getdata()
		{
			cout<<"Enter Person Id , name and salary : ";
			cin>>id>>name>>salary;
			/*cout<<"\n Enter Person Name : ";
			cin>>name;
			cout<<"\n Enter Person Salary : ";
			cin>>salary;*/
		}
		void print()
		{
			cout<<" Id : "<<id<<endl<<" Name : "<<name<<endl<<" Salary : "<<salary<<endl;
			
		}
};
int main()
{
	person p;
	p.getdata();
	p.print();
	return 0;
}
