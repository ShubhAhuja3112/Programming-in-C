/*Experiment 3.2
WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user*/
#include<stdio.h>
#include <stdio.h>

int main() 
{
    float a, b, c;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");  
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b) 
	{
        printf("Triangle is valid.\n");
        if (a == b && b == c) 
		{
            printf("Triangle is equilateral.\n");
        }
        else if (a == b || b == c || c == a) 
		{
            printf("Triangle is isosceles.\n");
        }
        else if ((a * a == b * b + c * c) ||(b * b == a * a + c * c) ||(c * c == a * a + b * b)) 
		{
            printf("Triangle is right angled.\n");
        }
        else
		{
            printf("Triangle is scalene.\n");
        }
    } 
	else 
	{
        printf("Triangle is not valid.\n");
    }

    return 0;
}

