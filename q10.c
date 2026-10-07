#include <stdio.h>

int main(void)
{
	int withdraw;
	int count = 0;
	int total = 0;
	
	do
	{
		printf("enter withdrawal amount: ");
		scanf("%d", &withdraw);		
		
		if (withdraw > 0)
		{
			count++;
			total += withdraw;
		}
	}
	while (withdraw != 0);

	printf("%d transactions made\n", count);
	printf("total amount withdrawn: %d\n", total);
}
