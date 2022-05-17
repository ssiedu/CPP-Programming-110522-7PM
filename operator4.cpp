#include<iostream>
#include<stdlib.h>
using namespace std;
 int main()
 {
 	int a = 10,b=5;
 	system("cls");
 	cout<<" Bitwise And : "<<((a<b) & (a>b))<<endl; //0 & 1 // 0
 	cout<<" Bitwise  OR : "<<((a<b) | (a>b))<<endl;// 0 | 1 // 1
 	cout<<" Bitwise XOR : "<<((a<b) ^ (a>b))<<endl; // 1
 	
 	system("pause");
 	return 0;
 }
