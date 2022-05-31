#include<iostream>
using namespace std;
class item
{
	int num;
	static int count;
	public:
		void getnum(int a)
		{
			num=a;
			count++;
		}
		void display()
		{
			cout<<"\n count is : "<<count<<endl;
			
		}
};
 int item :: count;
 int main()
 {
 	item i1,i2,i3;
 	i1.display();
 	i2.display();
 	i3.display();
 	i1.getnum(100);
 	i1.display();
 	i2.getnum(200);
 	i3.getnum(300);
 	cout<<"\n";
 	
 	i2.display();
 	i3.display();
 	return 0;
 }



