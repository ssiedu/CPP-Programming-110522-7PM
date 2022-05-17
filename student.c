#include<stdio.h>
struct student
{
	int rollno;
	char name[25];
	float marks;
	void getdata()
	{
		printf("\n Enter student rollno : ");
		scanf("%d",&rollno);
		printf("\n Enter student name : ");
		scanf("%s",&name);
		printf("\n Enter student marks : ");
		scanf("%f",&marks);
	}
	void display()
	{
		printf("\n Student rollno : %d",rollno);
		printf("\n student name   : %s",name);
		printf("\n student marks  : %.2f",marks);
	}
	
}stu;
void main()
{
	stu.getdata();
	stu.display();
	getch();
}






