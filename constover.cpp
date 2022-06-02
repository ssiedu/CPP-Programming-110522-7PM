#include<iostream>
using namespace std;
class code
{
	public :
		int id;
		code(){} // default constructor
		code(int a)//parameterized constructor
		{
			id=a;
		 } 
		 code(code &y)// copy constructor
		 {
		 	id=y.id;
		 }
		 /*void display()
		 {
		 	cout<<id<<endl;
		 }*/
};
int main()
{
	code c(101);// paramerter
	code c1(c);//copy
	code c2 = c;//copy
	code d;//creating object
	d=c;//initialization of object
	cout<<"\n id is : "<<c.id<<endl;
	cout<<"\n id is c1 : "<<c1.id<<endl;
	cout<<"\n id is c2 : "<<c2.id<<endl;
	cout<<"\n id is d  : "<<d.id<<endl;
	return 0;
}
