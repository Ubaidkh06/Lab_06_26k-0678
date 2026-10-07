#include <stdio.h>

int main(void)
{
	/*
	10 products
	each has current quantity
	each has required quantity
	*/
	
	int stock[10];
	int minimum[10];
	int difference[10] = {0};
	int high_index = 0;
	int total_diff = 0;
	
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("input current stock of product %d: ", i + 1);
		scanf("%d", &stock[i]);
		
		printf("input minimum required quantity of product %d: ", i + 1);
		scanf("%d", &minimum[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		if (stock[i] < minimum[i]) ///////////////////////// need reordering
		{
			difference[i] = minimum[i] - stock[i];
			if (difference[i] > difference[high_index])
			{
				high_index = i;
		  	}
		  	
		  	total_diff = total_diff + difference[i];
		}
	}
	
	if (total_diff == 0)
	{
		printf("no largest reorder\n");
	}
	else
	{
		printf("product %d needs the highest reorder\n", high_index);
		
	}
	printf("total reorder quantity is: %d\n", total_diff);
}
