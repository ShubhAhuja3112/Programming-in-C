/*Experiment 4.3.8
     1
   1 2 1
  1 2 3 2 1
 1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
 1 2 3 4 3 2 1
   1 2 3 2 1
    1 2 1
     1*/
int main()
{
  int i,j,n;
  printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
  for(i=1;i<=5;i++)
  {
    printf("\n");
    for(j=1;j<=(5-i);j++)
    {
        printf("  ");
    }
    for(j=1;j<=i;j++)
    {
        printf(" %d",j);
    }
    for(j=1;j<i;j++)
    {
        printf(" %d",(i-j));
    }
  }
  for(i=1;i<=5;i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf("  ");
    }
    for(j=1;j<(5-i);j++)
    {
       printf(" %d",j);
    }
    for(j=(5-i);j>0;j--)
    {
       printf(" %d",j);
    }
  }
  return 0;
}
