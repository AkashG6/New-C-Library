#include<stdio.h>
#include"array.h"
int main(void)
{
  int m,n,i,j,p,q;
  printf("\nEnter the row and column mat1 :" );
  scanf("%d%d",&m,&n );
  printf("\nEnter the row and column mat2:" );
  scanf("%d%d",&p,&q );
  int a[m][n],b[p][q],add[m][n],sub[m][n],mul[m][q];
  for (i=0;i<m;i++)
   {
    for (j=0;j<n;j++)
     {
      printf("\nEnter the element in the Matrix[%d][%d]:",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  }
  prt_mat(m,n,a);
  for (i = 0; i <p; i++)
   {
    for (j = 0; j < q; j++)
     {
      printf("\nEnter the element in the Matrix[%d][%d]:",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  prt_mat(p,q,b);
  add_mat(m,n,p,q,mul,a,b);
  prt_mat(m,q,mul);

  return 0;
}
