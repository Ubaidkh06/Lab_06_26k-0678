#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char password[5][100];
	int score[5] = {0};
	int len;
	int high = 0;
	int count = 0;
	
	
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("input password number %d (maximum 99 characters long): ", i + 1);
		scanf("%s", password[i]); 
		
		len = strlen(password[i]);
		
		if (len >= 8)
		{
			score[i] = score[i] + 5;
		}
		
		int j;
		for (j = 0; j < len; j++)
		{
			if (isalpha(password[i][j]))
			{
				if (islower(password[i][j]))
				{
					score[i]++;
				}
				else if (isupper(password[i][j]))
				{
					score[i] = score[i] + 2;
				}
			}
			else if (isdigit(password[i][j]))
			{
				score[i] = score[i] + 3;
			}
		}
		
		int k;
		for (k = 0; k < len - 2; k++)
		{
			if (password[i][k] == '1' && password[i][k + 1] == '2' && password[i][k + 2] == '3')
			{
				score[i] = score[i] - 3;
			}
		}
	}
	
	int m;
	for (m = 0; m < 5; m++)
	{
		if (score[m] > score[high])
		{
			high = m;
		} 
		
		if (score[m] < 10)
		{
			count++;
		}
		
		printf("%s has a score of %d\n", password[m], score[m]);
	}
	
	printf("strongest password is: %s\n", password[high]);
	printf("%d passwords scored below 10\n", count);
}
