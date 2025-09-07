/*Experiment 2.2*/
/*Write a program to calculate Compound Interest.*/
#include <stdio.h>
#include <math.h>
int main()
{
	printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
	double ci,p,r,t,n,a;
	printf("enter the principal");
	scanf("%lf",&p);
	printf("enter the rate");
	scanf("%lf",&r);
	printf("enter the time");
	scanf("%lf",&t);
	printf("enter the number of times interest compounded per year");
	scanf("%lf",&n);
	a=p*pow((1+r/(n*100)),n*t);
	ci=a-p;
	printf("the compound interest for the given values is= %lf",ci);
	return 0;
	
}
