#include<iostream>
using namespace std;
class Max_num
{
	int x,y;
	public:
		void getdata(int a,int b)
		{
			x=a;
			y=b;
		}
		void display();
		void max();
};
void Max_num :: display()
{
	cout<<"\n value of x : "<<x;
	cout<<"\n value of y : "<<y;
}
 inline void Max_num :: max()
 {
 	cout<<"\n Max Number : "<<((x>y)?x:y)<<endl;
 }
 
 int main()
 {
 	Max_num m;
 	m.getdata(20,50);
 	m.display();
 	cout<<"\n";
 	m.max();
 	return 0;
 }
