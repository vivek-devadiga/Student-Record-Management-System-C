

#include<stdio.h>
#include"student_struct.h"

/* Display Student Record */
void display(struct student arr)
{
printf("name : %s\n",arr.name);
printf("rollno : %d\n",arr.rollno);
printf("total : %d\n",arr.total);
printf("grade :%c\n",arr.grade);

}

