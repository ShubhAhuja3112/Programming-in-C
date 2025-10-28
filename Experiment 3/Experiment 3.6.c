/*Experiment 3.6
3.6. WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.*/
#include <stdio.h>
int main()
{
	double l1,l2,l3,b1,b2,b3,p1,p2,p3,max;
	printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
	printf("enter lenght and breadth of first rectangle");
	scanf("%lf %lf",&l1,&b1);
	printf("enter lenght and breadth of second rectangle");
	scanf("%lf %lf",&l2,&b2);
	printf("enter lenght and breadth of third rectangle");
	scanf("%lf %lf",&l3,&b3);
	p1=2*(l1+b1);
	p2=2*(l2+b2);
	p3=2*(l3+b3);
	max=p1>p2 ? ((p1>p3) ? printf("first rectangle has biggest perimeter %f",p1):printf("third rectangle has biggest perimeter %f",p3)) : ((p2>p3) ? printf("second rectangle has biggest perimeter %f",p2):printf("third rectangle has biggest perimeter %f",p3));
	return 0;
}
