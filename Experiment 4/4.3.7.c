/*Experiment 4.3.7
12345
 1234
  123
   12
    1 */
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
      printf(" ");
    }
    for(j=1;j<=(5-i+1);j++)
    {
      printf("%d",j);
    }
  }
  return 0;
}
