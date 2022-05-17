#include<iostream>
using namespace std;
 int main()
 {
 	int a,b;
 	cout<<"\n Enter value :";
 	cin>>a>>b;
 	
 	int res = (a>b) ? a : b;
 	cout<< " \n Largest value : "<<res<<endl;
 	return 0;
 }
