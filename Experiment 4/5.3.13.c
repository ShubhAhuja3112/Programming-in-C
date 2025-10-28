/*Experiment 4.3.13
    5
      5 4 5
    5 4 3 4 5
  5 4 3 2 3 4 5 
5 4 3 2 1 2 3 4 5
  5 4 3 2 3 4 5
    5 4 3 4 5
      5 4 5
        5*/
#include<stdio.h>
int main()
{
  int i,j;
  printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
  for(i=1;i<=5;i++)
  {
    printf("\n");
    
    for(j=1;j<=5-i;j++)
    {
       printf("  ");
    }
    for(j=5;j>5-i;j--)
    {
       printf(" %d",j);
    }
    for(j=5-i+2;j<5+1;j++)
    {
       printf(" %d",j);
    }
  }
  for(i=1;i<=5;i++)
  {
    printf("\n");

    for(j=1;j<=i;j++)
    {
       printf("  ");
    }
    for(j=5;j>i;j--)
    {
       printf(" %d",j);
    }
    for(j=i+2;j<=5;j++)
    {
       printf(" %d",j);
    }

  }
  return 0;
}
