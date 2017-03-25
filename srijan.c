#include<stdio.h>
#include"array.h"
int main(int argc, char const *argv[])
{
  int m,n;
  float a[m][n];
  printf("\nEnter the row and column :" );
  scanf("%d%d",&m,&n );
  read_mat(m,n,a);
  prt_mat(m,n,a);

  return 0;
}
