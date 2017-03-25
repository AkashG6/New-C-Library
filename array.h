//Header file for array related operations (one dimensional arrays(lists) and two dimensional arrays(matrices))

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
void prt_mat(float **mat,int m,int n)
{
  int i,j;
  r=m;c=n;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("\n MAT[%d][%d]=%f\n",i,j,*(*(mat+1)+j));
    }
  }
}
//===================================================

//Finding minimum element in an array of integer values
int array_min_int(int a[], int n) {
  int c, min, index;
 
  min = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] < min) {
       index = c;
       min = a[c];
    }
  }
 
  return a[index];
}


//Finding minimum element in an array of float values
float array_min_float(float a[], int n) {
  int c, index;
  float min;
 
  min = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] < min) {
       index = c;
       min = a[c];
    }
  }
 
  return a[index];
}

//Finding maximum element in an array of integer values
int array_max_int(int a[], int n) {
  int c, max, index;
 
  max = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] > max) {
       index = c;
       max = a[c];
    }
  }
 
  return a[index];
}


//Finding maximum element in an array of float values
float array_max_float(float a[], int n) {
  int c, index;
  float max;
 
  max = a[0];
  index = 0;
 
  for (c = 1; c < n; c++) {
    if (a[c] > max) {
       index = c;
       max = a[c];
    }
  }
 
  return a[index];
}

