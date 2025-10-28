/*4.4. 
The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.*/
#include <stdio.h>
int main() 
{
	printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
	double pop =100000;
	int i;
	double a;
	double rate =0.10;
	for (i=0;i<10;i++)
	{
		a = pop * rate;
		pop = pop + a;		
		printf("population after %d year is %2.lf",i,pop);	
		printf("\n");
	}
    return 0;
}
