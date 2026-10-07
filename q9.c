#include <stdio.h>

int main(void)
{
	int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
	int flag = 0;
	int sum = 0;
	int normal = 0;
	int high_index = 0;
	float avg;
	
	int i;
	for (i = 0; i < 10; i++)
	{
		if (transfers[i] < 100 || transfers[i] > 200000)
		{
			flag++;
		}
		else
		{
			normal++;
			sum += transfers[i];	
		}
		
		if (transfers[i] > transfers[high_index])
		{
			high_index = i;
		}		
	}
	printf("%d %d\n", sum, normal);
	avg = sum / (float)normal;
	printf("total flagged transactions: %d\n", flag);
	printf("average of only normal transfers: %0.1f\n", avg);
	printf("transfer %d was with the largest amount\n", high_index + 1);
}
