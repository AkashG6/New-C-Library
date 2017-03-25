#include<stdio.h>
#include"array.h"
int main(void)
{
  int m,n,i,j,p,q;
  printf("\nEnter the row and column mat1 :" );
  scanf("%d%d",&m,&n );
  printf("\nEnter the row and column mat2:" );
  scanf("%d%d",&p,&q );
  int a[m][n],b[p][q],add[m][n],sub[m][n],mul[m][q],tr[q][m];
  Iread_mat(m,n,a);
  Iprt_mat(m,n,a);
  Iread_mat(p,q,b);
  Iprt_mat(p,q,b);
  Iadd_mat(m,n,p,q,mul,a,b);
  Iprt_mat(m,q,mul);

  Itranspose_mat(m,q,tr,mul);
  Iprt_mat(q,m,tr);

  return 0;
}
