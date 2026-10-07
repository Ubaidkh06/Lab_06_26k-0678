#include <stdio.h>

int main() 
{
    int signal[12];
    int sum = 0 ;
    float avg;
    int count = 0;
    int high = 0;
    int low = 0;
    
    int i;
    for (i = 0; i < 12; i++)
    {
    	printf("enter the number of cars waiting on signal %d: ", i + 1);
     	scanf("%d", &signal[i]);
     	
     	sum = sum + signal[i];
	}
	 
	avg = sum / 12.0;
	
	int j;
	for (j = 0; j < 12; j++)
    {
    	if (signal[j] > avg)
		{
			count++;
		}	
		
		if (signal[j] > signal[high])
		{
			high = j;
		}
		
		if (signal[j] < signal[low])
		{
			low = j;
		}
	}
	
	printf("overloaded signals: %d\n", count);
	printf("difference between signal with highest cars and lowest cars is: %d\n", signal[high] - signal[low]);
}
