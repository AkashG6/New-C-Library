#include<stdio.h>
#include"array.h"
int main(void)
{
  int m,n,i,j,p,q;
  printf("\nEnter the row and column mat1 :" );
  scanf("%d%d",&m,&n );
  printf("\nEnter the row and column mat2:" );
  scanf("%d%d",&p,&q );
  /*
  int a[m][n],b[p][q],add[m][n],sub[m][n],mul[m][q],tr[n][m],in[m][n];
  Iread_mat(m,n,a);
  printf("\nMatrix A:\n");
  Iprt_mat(m,n,a);
  Iread_mat(p,q,b);
  printf("\nMatrix B:\n");
  Iprt_mat(p,q,b);
  Iadd_mat(m,n,p,q,add,a,b);
  printf("\nAdded Matrix:\n");
  Iprt_mat(m,n,add);

  Isub_mat(m,n,p,q,sub,a,b);
  printf("\nSubtracted Matrix:\n");
  Iprt_mat(m,n,sub);

  Imul_mat(m,n,p,q,mul,a,b);
  printf("\nMultiplied Matrix:\n");
  Iprt_mat(m,q,mul);

  Itranspose_mat(m,n,tr,a);
  printf("\nTranspose of Matrix A:\n");
  Iprt_mat(n,m,tr);

  Iinverse_mat(m,n,in,a);
  printf("\nInverse of Matrix A:\n");
  Iprt_mat(m,n,in);

  */
  /*
  float a[m][n],b[p][q],add[m][n],sub[m][n],mul[m][q],tr[n][m],in[m][n];
  Fread_mat(m,n,a);
  printf("\nMatrix A:\n");
  Fprt_mat(m,n,a);
  Fread_mat(p,q,b);
  printf("\nMatrix B:\n");
  Fprt_mat(p,q,b);
  Fadd_mat(m,n,p,q,add,a,b);
  printf("\nAdded Matrix:\n");
  Fprt_mat(m,n,add);

  Fsub_mat(m,n,p,q,sub,a,b);
  printf("\nSubtracted Matrix:\n");
  Fprt_mat(m,n,sub);

  Fmul_mat(m,n,p,q,mul,a,b);
  printf("\nMultiplied Matrix:\n");
  Fprt_mat(m,q,mul);

  Ftranspose_mat(m,n,tr,a);
  printf("\nTranspose of Matrix A:\n");
  Fprt_mat(n,m,tr);

  Finverse_mat(m,n,in,a);
  printf("\nInverse of Matrix A:\n");
  Fprt_mat(m,n,in);

  */
  return 0;
}
