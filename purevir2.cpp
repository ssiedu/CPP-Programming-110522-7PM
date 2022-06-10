#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual float calArea()=0;
};
class Square : public Shape
{
	float a;
	public:
		Square(float i)
		{
			a=i;
		}
		float calArea()
		{
			return a*a;
		}
};
class Circle : public Shape
{
	float r;
	public:
		Circle(float x)
		{
			r=x;
		}
		float calArea()
		{
			return 3.14*r*r;
		}
	
};
class Ractangle : public Shape
{
	float l,b;
	public:
		Ractangle(float a, float e)
		{
			l=a;
			b=e;
		}
		float calArea()
		{
			return l*b;
		}
};
int main()
{
	Shape *sh;
	Square s(2.1);
	Circle c(3.1);
	Ractangle r(2.2,1.1);
	sh = &s;
	int res1=s.calArea();
	sh = &c;
	int res2=c.calArea();
	sh = &r;
	int res3=r.calArea();
	cout<<"\n area of square : "<<res1<<endl;
	cout<<"\n area of circle : "<<res2<<endl;
	cout<<"\n area of ract   : "<<res3<<endl;
	return 0;
	
	
	
}













