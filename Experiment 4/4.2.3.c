/*Experiment 4.3.3
1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15*/
#include<stdio.h>
int main()
{
  int i,j,b=1;
  printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
  for(i=1;i<=5;i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf(" %d",b);
      b++;
    }
  }
  return 0;
}
