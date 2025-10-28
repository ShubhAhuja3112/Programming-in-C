/*Experiment 3.5
WAP to check whether a year is Leap or not.*/
#include <stdio.h>
int main ()
{
	int year,n=0,i;
	printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
	printf("enter the year");
	scanf("%d",&year);
	 if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("The enterd year is Leap Year");
	}
	else
	{
		printf("The entered year is not a Leap Year");
	}
	return 0;
}
