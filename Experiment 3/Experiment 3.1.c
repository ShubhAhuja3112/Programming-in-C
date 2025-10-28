/*Experiment 3.1
Write a C program to check whether a number is Even or ODD*/
#include <stdio.h>
int main()
{
	int n;
	printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
	printf("enter the number you want to check if it is even or odd \n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	return 0;
}
