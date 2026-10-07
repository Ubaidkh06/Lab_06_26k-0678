#include <stdio.h>

int main(void)
{
	int seats[15] = {0};
	int booked = 0;
	int available = 0;
	int count = 0;
	
	int i;
	for (i = 0; i < 15; i++)
	{
		printf("is seat %d booked? (1 for yes, 0 for no): ", i + 1);
		scanf("%d", &seats[i]);
	
		if (seats[i] == 1)
		{
			booked++;
		}
		else if (seats[i] == 0)
		{
			available++;
		}
	}

	for (i = 0; i < 15; i++)
	{
		if (seats[i] == 0)
		{
			printf("seat %d is the first available seat\n", i + 1);
			break;
		}
	}
	
	for (i = 14; i >= 0; i--)
	{
		if (seats[i] == 0)
		{
			printf("seat %d is the last available seat\n", i + 1);
			break;
		}
	}
	
	for (i = 0; i < 15; i++)
	{
		if (seats[i] == 0)
		{
			seats[i] = 1;
			count++;
		}
		
		if (count == 3)
		{
			break;
		}
	}
	
	for (i = 0; i < 15; i++)
	{
		if (seats[i] == 1)
		{
		printf("seat %d: booked\n", i + 1);
		}
		else if (seats[i] == 0)
		{
			printf("seat %d: available\n", i + 1);
		}
	}
	
}
