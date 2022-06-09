#include<iostream>
using namespace std;
class first
{
	public:
		void sum(int a, int b)
		{
			cout<<"\n sum of integer value:  "<<a+b<<endl;
		}
};
class second : public first
{
	public:
		void sum(float a , float b)
		{
			cout<<"\n sum of flaot value : "<<a+b<<endl;
		}
};
int main()
{
	first f;
	second s;
	f.sum(2,3);
	s.sum(2.3,4.2);
	return 0;
}

