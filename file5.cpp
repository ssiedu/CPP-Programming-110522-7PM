#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Inventory
{
	int itemno;
	char name[25];
	float price;
	public:
		void readdata();
		void writedata();
};
void Inventory :: writedata()
{
	cout<<"\n Enter item no :";
	cin>>itemno;
	cout<<"\n Enter item Name : ";
	cin>>name;
	cout<<"\n Enter price : ";
	cin>>price;
}
void Inventory :: readdata()
{
	cout<<setw(10)<<itemno<<setw(10)<<name<<setw(10)<<price<<endl;
}
int main()
{
	fstream file;
	file.open("stock.dat",ios::in | ios::out);
	Inventory item[3];
	int i;
	int g = file.tellg();
	int p = file.tellp();
	cout<<"\n position of get ptr : "<<g;
	cout<<"\n position of put ptr : "<<p;
	cout<<"\n Enter item Details :\n";
	for(i=0;i<3;i++)
	{
		item[i].writedata();
		file.write((char*)&item[i],sizeof(item[i]));
	}
	file.seekg(0);
	g = file.tellg();
	p = file.tellp();
	cout<<"\n position of get ptr : "<<g;
	cout<<"\n position of put ptr : "<<p;
	cout<<"\n Details of Item : \n";
	for(i=0;i<3;i++)
	{
		file.read((char*)&item[i],sizeof(item[i]));
		item[i].readdata();
	}
	file.close();
	return 0;
}
