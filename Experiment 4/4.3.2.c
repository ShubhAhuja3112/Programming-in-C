/*Experiment 4.3.2
1
12
123
1234
12345*/
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
      printf("%d",j);
    }
  }
  return 0;
}
