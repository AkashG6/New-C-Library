#include<stdio.h>
#include<stdlib.h>
//==================================
int r,c;
//==================================
void read_mat(float **mat,int m,int n)
{
  int i,j;
  r=m;c=n;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("\nEnter the element in the MAT[%d][%d]:",i,j);
      scanf("%f",(*(mat+i)+j));
    }
  }
}
//===============================
void prt_mat(float mat[][],int m,int n)
{
  int i,j;
  r=m;c=n;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("\n MAT[%d][%d]=%f\n",i,j,*(*(mat+1)+j);
    }
  }
}
//===================================================
