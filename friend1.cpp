#include<iostream>
using namespace std;
class Class2;
class Class1
{
	int value1;
	public:
		void setvalue(int a)
		{
			value1 =a;
		}
		void display()
		{
			cout<<"\n value 1 is : "<<value1<<endl;
		}
		friend void exchange(Class1 & , Class2&);
};
class Class2
{
	int value2;
	public:
		void setvalue(int b)
		{
			value2 = b;
		}
		void display()
		{
			cout<<"\n value 2 is : "<<value2<<endl;
		}
		friend void exchange(Class1 &, Class2 &);
};
void exchange(Class1 &x,Class2 &y)
{
	int temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}
 int main()
 {
 	Class1 C1;
 	Class2 C2;
 	C1.setvalue(100);
 	C2.setvalue(200);
 	cout<<"\n Before exchange : "<<endl;
 	C1.display();
 	C2.display();
 	exchange(C1,C2);
 	cout<<"\n After exchange : "<<endl;
 	C1.display();
 	C2.display();
 	return 0;
 }
