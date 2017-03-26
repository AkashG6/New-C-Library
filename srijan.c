#include<stdio.h>
#include"array.h"
int main(void)
{
  int m,n,i,j,p,q;
  printf("\nEnter the row and column mat1 :" );
  scanf("%d%d",&m,&n );
  printf("\nEnter the row and column mat2:" );
  scanf("%d%d",&p,&q );

  int a[m][n],b[p][q],add[m][n],sub[m][n],mul[m][q],tr[n][m],in[m][n];
  int_read_mat(m,n,a);
  printf("\nMatrix A:\n");
  int_prt_mat(m,n,a);
  int_read_mat(p,q,b);
  printf("\nMatrix B:\n");
  int_prt_mat(p,q,b);
  int_add_mat(m,n,p,q,add,a,b);
  printf("\nAdded Matrix:\n");
  int_prt_mat(m,n,add);

  int_sub_mat(m,n,p,q,sub,a,b);
  printf("\nSubtracted Matrix:\n");
  int_prt_mat(m,n,sub);

  int_mul_mat(m,n,p,q,mul,a,b);
  printf("\nMultiplied Matrix:\n");
  int_prt_mat(m,q,mul);

  int_transpose_mat(m,n,tr,a);
  printf("\nTranspose of Matrix A:\n");
  int_prt_mat(n,m,tr);

  int_inverse_mat(m,n,in,a);
  printf("\nInverse of Matrix A:\n");
  int_prt_mat(m,n,in);


  /*
  float a[m][n],b[p][q],add[m][n],sub[m][n],mul[m][q],tr[n][m],in[m][n];
  float_read_mat(m,n,a);
  printf("\nMatrix A:\n");
  float_prt_mat(m,n,a);
  float_read_mat(p,q,b);
  printf("\nMatrix B:\n");
  float_prt_mat(p,q,b);
  float_add_mat(m,n,p,q,add,a,b);
  printf("\nAdded Matrix:\n");
  float_prt_mat(m,n,add);

  float_sub_mat(m,n,p,q,sub,a,b);
  printf("\nSubtracted Matrix:\n");
  float_prt_mat(m,n,sub);

  float_mul_mat(m,n,p,q,mul,a,b);
  printf("\nMultiplied Matrix:\n");
  float_prt_mat(m,q,mul);

  float_transpose_mat(m,n,tr,a);
  printf("\nTranspose of Matrix A:\n");
  float_prt_mat(n,m,tr);

  float_inverse_mat(m,n,in,a);
  printf("\nInverse of Matrix A:\n");
  float_prt_mat(m,n,in);

  */
  return 0;
}
