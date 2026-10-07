#include <stdio.h>

int main(void)
{
	int marks[15];
	int sum = 0;
	float avg;
	int count = 0;
	
	int high_index = 0;
	int low_index = 0;
	int range;
	
	int i;
	for (i = 0; i < 15; i++)
	{
		printf("Input marks for student %d: ", i + 1);
		scanf("%d", &marks[i]);
		
		if (marks[i] + 5 > 100)
		{
			marks[i] = 100;	
		}
		else
		{
			marks[i] = marks[i] + 5;
		}
		
		sum = sum + marks[i];
		
		if (marks[i] > marks[high_index])
		{
			high_index = i;
		}
		
		if (marks[i] < marks[low_index])
		{
			low_index = i;
		}
	}
	printf("%d\n", sum);
	avg = sum / 15.0;
	
	for (i = 0; i < 15; i++)
	{
		if (marks[i] == 100)
		{
			count++;
		}
	}
	
	range = marks[high_index] - marks[low_index];
	
	printf("new average: %0.1f\n", avg);
	printf("students with exactly 100 marks: %d\n", count);
	printf("range: %d\n", range);

}
