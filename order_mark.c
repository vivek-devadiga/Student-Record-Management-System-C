#include"student_struct.h"

/* Sort Student Records by Total Marks */
void sort(struct student arr[], int n)
{
struct student temp;

	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i].total < arr[j].total )
			{
			temp =arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}
		}
	}
}
