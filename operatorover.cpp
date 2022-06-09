#include<iostream>
using namespace std;
class count
{
	int value;
	public:
		count()
		{
			value =6;
		}
		void operator ++()
		{
			value = value+3;
		}
		
		void display()
		{
			cout<<"\n count is : "<<value<<endl;
		}
};

int main()
{
	count c1;
	++c1;  // function call with operator
	c1.display();
	return 0;
}






