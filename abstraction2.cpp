#include<iostream>
using namespace std;
class fact
{
	int num,f=1;
	public:
		void getdata()
		{
			cout<<"\n Enter number : ";
			cin>>num;
		}
		void calculate()
		{
			//int f=1;
			for(int i=1;i<=num;i++)
			{
				f=f*i;				
			}
			cout<<"\n factorial is : "<<f<<endl;
		}
		
};
int main()
{
	fact x;
	x.getdata();
	x.calculate();
	return 0;
}
