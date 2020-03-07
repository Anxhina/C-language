#include <stdio.h>

void print_bottom(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<19;j++)
        {
            printf(" ");
        }
        for(int k=0;k < n;k++)
        {
            printf("|");
        }
        printf("\n");
    }
    }

int n;
int main()    
{
    n=4;
    
     int i,j,m;
  float k;
  
  m=n+9;
  printf("\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<(m+2*n);j++)
    {
      printf(" ");
    }
    m--;

    for(k=0;k<=i;k+=0.5)
    {
    printf("*");
    }
    printf("\n");
  }
  n++;
  m=n+9;
  for(i=0;i<n;i++)
  {
      for(j=0;j<(m+(2*n)-5);j++)
    {
      printf(" ");
    }
    m--;

    for(k=0;k<(i+2.5);k+=0.5)
    {
    printf("*");
    }
    printf("\n");
  }
  n++;
  
  m=n+9;
  for(i=0;i<n;i++)
  {
    for(j=0;j<((m+(2*n))-11);j++)
    {
      printf(" ");
    }
    m--;

    for(k=0;k<(i+5.5);k+=0.5)
    {
    printf("*");
    }
    printf("\n");
  }

 
  n++;
   m=n+9;
  for(i=0;i<n;i++)
  {
    for(j=0;j<((m+(2*n))-18);j++)
    {
      printf(" ");
    }
    m--;

    for(k=0;k<(i+9.5);k+=0.5)
    {
    printf("*");
    }
    printf("\n");
  }
   n++;
   m=n+9;
  for(i=0;i<n;i++)
  {
    for(j=0;j<((m+(2*n))-26);j++)
    {
      printf(" ");
    }
    m--;

    for(k=0;k<(i+14.5);k+=0.5)
    {
    printf("*");
    }
    printf("\n");
    }
  print_bottom(5);
  return 0;
}

int k;
