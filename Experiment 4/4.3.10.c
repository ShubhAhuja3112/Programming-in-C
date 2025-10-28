/*Experiment 4.3.10
5
45
345
2345
12345*/
#include<stdio.h>
int main()
{
  int i,j;
  printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
  for(i=0;i<5;i++)
  {
    printf("\n");
    for(j=5-i;j<=5;j++)
    {
      printf("%d",j);
    }
  }
  return 0;
}
