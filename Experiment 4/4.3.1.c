/*Experiment 4.3.1
1
22
333
4444
55555*/
#include<stdio.h>
int main()
{
  int i,j;
   printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
   for(i=1;i<=5;i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf("%d",i);
    }
  }
  return 0;
}
