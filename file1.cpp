#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int item_no;
	char name[24];
	float price;
	ofstream fout("ITEM");
	cout<<"\n Enter item number : ";
	cin>>item_no;
	fout<<item_no<<"\n";
	cout<<"\n Enter item Name : ";
	cin>>name;
	fout<<name<<endl;
	cout<<"\n Enter item price :  ";
	cin>>price;
	fout<<price<<"\n";
	fout.close();
	ifstream fin("ITEM");
	fin>>item_no;
	fin>>name;
	fin>>price;
	cout<<"\n Item Number : "<<item_no<<endl;
	cout<<"\n Item Name   : "<<name<<endl;
	cout<<"\n Item price  : "<<price<<endl;
	fin.close();
	return 0;
	
	
	
	
	
	
}
