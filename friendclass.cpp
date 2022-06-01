#include<iostream>
using namespace std;
class ABC; // declaration of class
class XYZ
{
	int x;
	public : 
	void setvalue(int a)
	{
		x=a;
	}
	friend void max (XYZ,ABC);
};
class ABC
{
	int y;
	public:
		void setvalue(int b)
		{
			y= b;
		}
		friend void max(XYZ,ABC);
};
void max(XYZ m, ABC n)
{
	if(m.x>n.y)
	cout<<"\n largest value : "<<m.x<<endl;
	else
	cout<<"\n largest value : "<<n.y<<endl;
}
int main()
{
	XYZ xyz;
	ABC abc;
	int a,b;
	cout<<"\n Enter the value of a : ";
	cin>>a;
	cout<<"\n Enter the value of b : ";
	cin>>b;
	xyz.setvalue(a);
	abc.setvalue(b);
	max(xyz,abc);
	return 0;
}
