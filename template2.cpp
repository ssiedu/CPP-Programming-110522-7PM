#include<iostream>
using namespace std;
template<class T>
class A
{
	public:
		T num1=4;
		T num2 =3;
		void add()
		{
			cout<<"\n addition is : "<<num1+num2<<endl;
		}
};
int main()
{
	A<int>d;
	d.add();
	return 0;
}
