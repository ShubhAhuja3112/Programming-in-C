/*Experiment 4.3.6
54321
4321
321
21
1 */
#include<stdio.h>
int main()
{
  int i,j;
  printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
  for(i=1;i<=5;i++)
  {
     printf("\n");
     for(j=5-i+1;j>0;j--)
     {
       printf("%d",j);
     }
  }
  return 0;
}

