#include<iostream>
using namespace std;
class sample
{
	float a,b;
	public:
		friend float mean(sample s);
		void getdata()
		{
			cout<<"\n Enter the value of a : ";
			cin>>a;
			cout<<"\n Enter the value of b : ";
			cin>>b;
		}
	
};
float mean (sample s)//definition of friend function
{
	return float(s.a+s.b)/2.0;
}
int main()
{
	sample x;
	x.getdata();
	cout<<"\n mean value is : "<<mean(x)<<endl;
	return 0;
}
