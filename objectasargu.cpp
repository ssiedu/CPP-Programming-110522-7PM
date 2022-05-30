#include<iostream>
using namespace std;
class time
{
	int hour;
	int min;
	public :
		void getdata(int h , int m)
		{
			hour = h;
			min = m;
		}
		void display()
		{
			cout<<hour<<"hr"<<":"<<min<<"min"<<endl;
		}
		void sum(time , time);
};

void time :: sum(time t1,time t2)
{
	min = t1.min + t2.min;
	hour = min/60;
	min = min%60;
	hour = hour + t1.hour + t2.hour;
}
int main()
{
	time t1,t2,t3;
	t1.getdata(2,45);
	t2.getdata(3,30);
	t3.sum(t1,t2);
	cout<<"\n T1 : ";
	t1.display();
	cout<<"\n T2 : ";
	t2.display();
	cout<<"\n T3 : ";
	t3.display();
	return 0;
}


