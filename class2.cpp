#include<iostream>
using namespace std;
class Add
{
	int a;
	float b;
	public:
		void getdata(int x,float y)
		{
			a=x;
			b=y;
		}
		void sum()
		{
			
			cout<<"\n Addition is : "<<a+b<<endl;
		}
};
int main()
{
	Add a1;
	a1.getdata(10,20.3);
	a1.sum();
	return 0;
	
}
