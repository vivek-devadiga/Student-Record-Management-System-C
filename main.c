
#include<stdio.h>
#include"student_struct.h"
#define N 5

/* Function declaration*/
void calculate(struct student arr[], int n);
void display(struct student arr);
void sort(struct student [], int n);

int main(void)
{
struct student stu[N];


/* Student input*/
for(int i=0; i<N; i++)
{
printf("enter the name\n");
scanf("%s",stu[i].name);

printf("enter the rollno\n");
scanf("%d",&stu[i].rollno);

stu[i].total=0;

/* marks input*/
printf("enter the marks\n");

	for(int j=0; j<6; j++)
	{
	printf("enter the subject :%d\n",j+1);
	scanf("%d",&stu[i].marks[j]);
	}
}

/* Calculate Total and Grade*/
calculate(stu,N);

/* Sort Student Records*/
sort(stu, N);

/* Display Student Record */
for (int i=0; i<N; i++)
	{
	display(stu[i]);
	}
}
