#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\n Enter your choice ";
	cin>>ch;
	switch(ch)
	{
		case 'm': cout<<"Monday"<<endl;
				  break;
		case 't' : cout<<"Tuesday"<<endl;
				   break;
		case 'w': cout<<"Wednesday"<<endl;
				  break;
		case 'th': cout<<"  Thursday "<<endl;
					break;
		case 'f' : cout<<"Friday"<<endl;
					break;
		case 's' : cout<<"Saturday"<<endl;
					break;
		case 'su': cout<<"sunday"<<endl;
				   break;
		default : cout<<"Invalid choice"<<endl;
				  
	}
	return 0;
}
