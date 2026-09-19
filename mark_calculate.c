
#include"student_struct.h"  //header file declear

void calculate(struct student arr[], int n)  // function define
{
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<6; j++)
		{

			arr[i].total += arr[i].marks[j];
		}
			if(arr[i].total> 500)
			arr[i].grade = 'A';

			else if(arr[i].total> 400)
                        arr[i].grade = 'B';

                        else if(arr[i].total> 300)
                        arr[i].grade = 'C';

                        else if(arr[i].total> 250)
                        arr[i].grade = 'D';

			else
			arr[i].grade = 'E';

	}
}
