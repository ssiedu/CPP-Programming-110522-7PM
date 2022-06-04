#include<iostream>
using namespace std;
int main()
{
	int *iInt;
	float *fFloat;
	
	iInt = new int;
	fFloat = new float;
	
	*iInt = 78;
	*fFloat = 32.66;
	
	cout<<"\n Integer pointer : "<<*iInt<<endl;
	cout<<"\n Float Pointer   : "<<*fFloat<<endl;
	
	delete iInt;
	delete fFloat;
	return 0;
	
}
