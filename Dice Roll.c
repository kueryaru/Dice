#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
		
	int number1,number2,sum,total=0,i;
	int frequency[13]={0};
	int expected[ 13 ] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

	srand(time(NULL));

	for (i = 0; i < 36000; i++)
	{
		sum=0;
		number1=1+rand()%6;
		number2=1+rand()%6;
		sum=number1+number2;
		frequency[sum]++;

	}

	for (i = 0; i < 13; i++)
	{
		total+=frequency[i];
	}
	
	printf("Sum       Total	    Expected	 What Actual Happenend\n");
	for (i = 2; i < 13; i++)
	{
		printf("%2d     %8d     %f     %9f\n",i,frequency[i], 100.0*expected[i]/36,100*(double)frequency[i]/total );
	}



	return 0;

} 