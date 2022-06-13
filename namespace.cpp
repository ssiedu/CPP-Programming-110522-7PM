#include<iostream>
using namespace std;
namespace first
{
//	public:
		void hello()
		{
			cout<<"\n hello first ";
		}
}
namespace second
{
	
	//public:
		void hello()
		{
			cout<<"\n hello second";
		}
}
using namespace first;
using namespace second;
int main()
{
	hello();
	hello();
	return 0;
}
