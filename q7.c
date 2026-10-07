#include <stdio.h>

int main(void)
{
	int input;
	int count = 0;
	int reverse = 0;
	
	printf("input number: ");
	scanf("%d", &input);
	
	int copy = input;
	while (copy != 0) 
	{
		copy = copy / 10;
		count++;
	}
	
	int digits[count];
	
	copy = input;
	int i;
	for (i = 0; i < count; i++)
	{
		digits[i] = copy % 10;
		copy = copy / 10;
	}
	
	int j;
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - 1 - i; j++)
		{
			digits[i] *= 10;
	
		}
		reverse += digits[i];
	}
	
	if (reverse == input)
	{
		printf("Palindrome Confirmed\n");
	}
	else
	{
		printf("Not a Palindrome\n");	
	}
	return 0;
}

	/* (alternate solution for line 12 to line 38):
	
	copy = input;
	int remainder;
	
	while (copy != 0)
	{	
	remainder = copy % 10;
	reverse = reverse * 10 + remainder;
	copy = copy / 10;
	}
	
	*/
