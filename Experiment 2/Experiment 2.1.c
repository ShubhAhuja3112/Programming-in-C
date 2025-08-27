/*experiment 2.1*/
/*wap to calculate area and perimeter of a rectangle*/
#include<stdio.h>
int main()
{
	int l,b;
	printf("enter the length of rectangle\n");
	scanf("%d",&l);
	printf("enter the breadth of rectangle\n");
	scanf("%d",&b);
	printf("perimeter of rectangle is=%d\n",(l*2)+(b*2));
	printf("area of rectangle is=%d",l*b);
}
