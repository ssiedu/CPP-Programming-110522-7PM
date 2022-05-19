#include<iostream>
using namespace std;
int main()
{
	int age;
	notelligible:
		cout<<"Person is not elligible for vote"<<endl;
		cout<<"\n Enter age : ";
		cin>>age;
		if(age <18)
		goto notelligible;
		else
		cout<<"\n Elligible for vote"<<endl;
		return 0;
}
