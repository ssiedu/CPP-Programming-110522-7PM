#include<iostream>
using namespace std;
class Max
{
	int x,y;
	public:
		void getdata() // function definition
		{
			cout<<"\n Enter the value x : ";
			cin>>x;
			cout<<"\n Enter the value of y : ";
			cin>>y;
		}
		void display();// function declaration
		int largest();//function declaration
};
 
 void Max :: display()
 {
 	cout<<"\n value of x : "<<x<<endl;
 	cout<<"\n value of y : "<<y<<endl;
 	cout<<"\n max value is : "<<largest()<<endl;
 }
 
 int Max :: largest()
 {
 	if(x>y)
 	return x;
 	else
 	return y;
 }
 
 int main()
 {
 	Max m;
 	m.getdata();
 	m.display();
 	return 0;
 }
 
 
 
