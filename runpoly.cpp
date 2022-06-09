#include<iostream>
using namespace std;
class first
{
	int a,b;
	public:
		void sum()
		{
			cout<<"\n Enter the value of a and b : ";
			cin>>a>>b;
			cout<<"\n sum of value : "<<a+b<<endl;
		}
};
class second : public first
{
	int a,b;
	public:
		void sum()
		{
			cout<<"\n Enter the value of a and b : ";
			cin>>a>>b;
			cout<<"\n subtraction is : "<<a-b<<endl;
		}
};
int main()
{
	first *f;
	second s;
	f=&s;
	f->sum();
	s.sum();
	return 0;
}
