#include<stdio.h>
#include<conio.h>

void GetData();
void DIsplay();

struct Employee
{
	int ID;
	char Name[20];
	float Salary;     
}emp;



void main()
{
	GetData();
	
//	Display();	
	
	getch();
}


void GetData()
{
	
	printf("ENter ID");
	scanf("%d",&emp.ID);
	
	printf("Enter Name");
	scanf("%s",emp.Name);
	
	printf("Enter Salary ");
	scanf("%f",&emp.Salary);
	
	Display(emp);
}

void Display(struct Employee e)
{
	printf("ID : %d",e.ID);
	
	printf("Name : %s",e.Name);
	
	printf("Salary : %f",e.Salary);	
	
}

