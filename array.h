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
 
  return index;
}


//Finding minimum element in an array of float values
int array_min_float(float a[], int n) {
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
 
  return index;
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
 
  return index;
}


//Finding maximum element in an array of float values
int array_max_float(float a[], int n) {
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
 
  return index;
}

//Sorting elements in the array in ascending order
 void array_asc_sort_int(int a[], int n)
   {                                                           
       int i, j, t;                                            
                                                               
       for(i = 1; i <= n-1; i++)                               
          for(j = 1; j <= n-i; j++)                             
             if(a[j-1] >= a[j])                                
             {
                t = a[j-1];                                    
                a[j-1] = a[j];                                 
                a[j] = t;                                      
             }                                                 
   }
              
//Sorting elements in the array in ascending order
 void array_asc_sort_float(float a[], int n)
   {                                                           
       int i, j, t;                                            
                                                               
       for(i = 1; i <= n-1; i++)                               
          for(j = 1; j <= n-i; j++)                             
             if(a[j-1] >= a[j])                                
             {
                t = a[j-1];                                    
                a[j-1] = a[j];                                 
                a[j] = t;                                      
             }                                                 
   }           

//Sorting elements in the array in descending order
 void array_desc_sort_int(int a[], int n)
   {                                                           
       int i, j, t;                                            
                                                               
       for(i = 1; i <= n-1; i++)                               
          for(j = 1; j <= n-i; j++)                             
             if(a[j-1] <= a[j])                                
             {
                t = a[j-1];                                    
                a[j-1] = a[j];                                 
                a[j] = t;                                      
             }                                                 
   }           

//Sorting float elements in the array in descending order
 void array_desc_sort_float(float a[], int n)
   {                                                           
       int i, j;
       float t;                                            
                                                               
       for(i = 1; i <= n-1; i++)                               
          for(j = 1; j <= n-i; j++)                             
             if(a[j-1] <= a[j])                                
             {
                t = a[j-1];                                    
                a[j-1] = a[j];                                 
                a[j] = t;                                      
             }                                                 
   }
