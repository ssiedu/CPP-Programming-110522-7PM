#include<iostream>
using namespace std;
class test
{
	int code;
	static int count;
	public :
		void getcode()
		{
			code = ++count;
		}
		void showcode()
		{
			cout<<"\n Number of object : "<<code<<endl;
		}
		static void showcount()
		{
			cout<<"\n count is : "<<count<<endl;
		}
};
 int test :: count;
 int main()
 {
 	test t1,t2;
 	t1.getcode();
 	t2.getcode();
 	test :: showcount();
 	test t3;
 	t3.getcode();
 	test::showcount();
 	t1.showcode();
 	t2.showcode();
 	t3.showcode();
 	return 0;
 }
