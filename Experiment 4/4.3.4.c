/*Experiment 4.3.4
1
21
321 
4321
54321*/
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
      printf("%d",(i-j+1));
    }
  }
  return 0;
}
