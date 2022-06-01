#include<iostream>
using namespace std;
class Number
{
	int n1,n2,sum;
	public:
		void getdata();
		void display()const
		{
			cout<<"\n n1 is : "<<n1<<endl;
			cout<<"\n n2 is : "<<n2<<endl;
			//sum = n1+n2;
			cout<<"\n Sum is : "<<sum<<endl;
		}
};
void Number :: getdata()
{
	cout<<"\n Enter n1 : ";
	cin>>n1;
	cout<<"\n Enter n2 : ";
	cin>>n2;
	sum = n1+n2;
}
int main()
{
	Number n;
	n.getdata();
	n.display();
	return 0;
}
