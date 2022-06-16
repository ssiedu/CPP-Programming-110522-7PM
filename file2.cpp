#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("C Programming");
	fout<<"Array \n";
	fout<<"Function \n";
	fout<<"Pointer \n";
	fout<<"Structure \n";
	fout.close();
	fout.open("C++ Programming");
	fout<<"Abstraction \n";
	fout<<"Encapsulation \n";
	fout<<"Inheritance \n";
	fout<<"Polymorphism \n";
	fout.close();
	ifstream fin;
	fin.open("C Programming");
	char line[80];
	cout<<"\n Content of C file \n";
	while(fin)
	{
		fin.getline(line,80);
		cout<<line<<endl;
	}
	fin.close();
	fin.open("C++ Programming");
	cout<<"\n Content of C++ file \n";
	while(fin)
	{
		fin.getline(line,80);
		cout<<line<<endl;
	}
	fin.close();
	return 0;
	
	
	
	
}
