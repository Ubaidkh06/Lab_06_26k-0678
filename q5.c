#include <stdio.h>

int main(void)
{
	int notes500[5] = {10, 5, 8, 12, 6};
	int notes200[5] = {20, 15, 10, 8, 14};
	int notes100[5] = {30, 25, 40, 35, 20};
	
	int sum = 0;
	int withdraw;
	
	int i;
	for (i = 0; i< 5; i++)
	{
		sum += notes500[i] * 500;
		sum += notes200[i] * 200;
		sum += notes100[i] * 100;
		
	}
	
	printf("enter withdrawal amount: ");
	scanf("%d", &withdraw);
	
	if (withdraw > sum)
	{
		printf("Insufficient Funds\n");
	}
	else if (withdraw % 100 != 0)
	{
		printf("Invalid Amount");
	}
	else
	{
		printf("Transaction Approved");
	}
}
