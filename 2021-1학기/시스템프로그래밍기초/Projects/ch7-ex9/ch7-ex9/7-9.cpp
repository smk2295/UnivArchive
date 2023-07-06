#include<stdio.h>
#include<math.h>

#define N 5

int main()
{
	int i, x[N] = {55, 21, 32, 47, 19};
	double average, sum = 0;
	
	for(i=0 ; i<N ; i++)
		sum = sum + x[i];
	average = sum/N;

	sum=0;
	for(i=0; i<N ;i++)
		sum = sum + pow(x[i]-average, 2);
	
	for(i=0; i<N ;i++)
		printf("x[%d]=%d \n", i, x[i]);
	
	printf ("\n평균: %.1lf\n", average);
	printf ("\n표준편차: %.1lf\n", sqrt(sum/N));

	return 0;
}