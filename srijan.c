#include<stdio.h>
#include"array.h"
int main(int argc, char const *argv[])
{
  int m,n;
  float a[m][n];
  printf("\nEnter the row and column :" );
  scanf("%d%d",&m,&n );
  for (size_t i = 0; i <m; i++) {
    for (size_t j = 0; j < n; j++) {
      printf("\nEnter the element in the Matrix[%d][%d]:",i,j);
      scanf("%f"&a[i][j]);
    }
  }
  prt_mat(m,n,&a);

  return 0;
}
