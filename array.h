//Header file for array related operations (one dimensional arrays(lists) and two dimensional arrays(matrices))
#include<stdio.h>
#include<stdlib.h>
//===================================
/*Taking Input From the User */
void Fread_mat(int m,int n,float (*a)[n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
		    printf("\nEnter Element in Matrix[%d][%d] : ",i+1,j+1);
        scanf("%f",&a[i][j]);
      }
    }
}
void Iread_mat(int m,int n,int (*a)[n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
		    printf("\nEnter Element in Matrix[%d][%d] : ",i+1,j+1);
        scanf("%d",&a[i][j]);
      }
    }
}
//===============================
void Iprt_mat(int m,int n,int (*mat)[n])
{
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",mat[i][j]);
    }
    printf("\n");
  }
}
void Fprt_mat(int m,int n,float (*mat)[n])
{
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%f\t",mat[i][j]);
    }
    printf("\n");
  }
}
//==========================================================================
void Iadd_mat(int m,int n,int p,int q,int (*add)[n],int (*a)[n],int (*b)[q])
{
  int i,j;
  if(p==m && q==n)
  {
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          add[i][j]=a[i][j]+b[i][j];
        }
      }
  }
  else
  {
    printf("Error : Can't Add! now of rows and columns are not equal in matrices\n");
    exit(0);
  }
}
void Fadd_mat(int m,int n,int p,int q,float (*add)[n],float (*a)[n],float (*b)[q])
{
  int i,j;
  if(p==m && q==n)
  {
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          add[i][j]=a[i][j]+b[i][j];
        }
      }
  }
  else
  {
    printf("Error : Can't Add! now of rows and columns are not equal in matrices\n");
    exit(0);
  }
}

//========================================================================
void Isub_mat(int m,int n,int p,int q,int (*sub)[n],int (*a)[n],int (*b)[q])
{
  int i,j;
  if(p==m && q==n)
  {
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          sub[i][j]=a[i][j]-b[i][j];
        }
      }
  }
  else
  {
    printf("Error : Can't subtract! now of rows and columns are not equal in matrices\n");
    exit(0);
  }
}
void Fsub_mat(int m,int n,int p,int q,float (*sub)[n],float (*a)[n],float (*b)[q])
{
  int i,j;
  if(p==m && q==n)
  {
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          sub[i][j]=a[i][j]-b[i][j];
        }
      }
  }
  else
  {
    printf("Error : Can't subtract! now of rows and columns are not equal in matrices\n");
    exit(0);
  }
}

//========================================================================
/*Matrix MULTIPLICATION */
void Imul_mat(int m,int n,int p,int q,int (*mul)[q],int (*a)[n],int (*b)[q])
{
    int i,j,k;
    if(n==p)
    {
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
          mul[i][j]=0;
        }
      }
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
          for (k=0;k<p;k++)
          {
             mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
          }
        }
      }
    }
    else
    {
      printf("Error : Can't Multiply! number of columns in 1st matrix is not equal to number of rows in the 2nd matrix.\n ");
      exit(0);
    }
}
void Fmul_mat(int m,int n,int p,int q,float (*mul)[q],float (*a)[n],float (*b)[q])
{
    int i,j,k;
    if(n==p)
    {
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
          mul[i][j]=0;
        }
      }
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
          for (k=0;k<p;k++)
          {
             mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
          }
        }
      }
    }
    else
    {
      printf("Error : Can't Multiply! number of columns in 1st matrix is not equal to number of rows in the 2nd matrix.\n ");
      exit(0);
    }
}
//================================================
/*calculate Transpose*/
void Itranspose_mat(int m,int n,int (*mt)[n],int (*mx)[n])
{
    int i,j;
    for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
           mt[i][j]=mx[j][i];
         }
     }
}
void Ftranspose_mat(int m,int n,float (*mt)[n],float (*mx)[n])
{
    int i,j;
    for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
           mt[i][j]=mx[j][i];
         }
     }
}
//=================================================
/*For calculating Determinant of the Matrix */
float Fdeterminant_mat(int k,int l,float (*a)[l])
{
  if(k==l)
  {
    float s = 1, det = 0, b[k][l];
    int i, j, m, n, c;
    if (k == 1)
      {
       return (a[0][0]);
      }
    else
      {
       det = 0;
       for (c = 0; c < k; c++)
         {
          m = 0;
          n = 0;
          for (i = 0;i < k; i++)
            {
              for (j = 0 ;j < l; j++)
                {
                  b[i][j] = 0;
                  if (i != 0 && j != c)
                   {
                    b[m][n] = a[i][j];
                     if (n < (k - 2))
                      n++;
                     else
                      {
                       n = 0;
                       m++;
                       }
                     }
                 }
               }
            det = det + s * (a[0][c] * Fdeterminant_mat( k - 1,l-1,b));
            s = -1 * s;
          }
      }
      return (det);
    }
    else
    {
      printf("Error : Can't find Determinant! Given matrix is not Square Matrix \n");
      exit(0);
    }
}
float Ideterminant_mat(int k,int l,int (*a)[l])
{
  if(k==l)
  {
    int s = 1, det = 0, b[k][l];
    int i, j, m, n, c;
    if (k == 1)
      {
       return (a[0][0]);
      }
    else
      {
       det = 0;
       for (c = 0; c < k; c++)
         {
          m = 0;
          n = 0;
          for (i = 0;i < k; i++)
            {
              for (j = 0 ;j < l; j++)
                {
                  b[i][j] = 0;
                  if (i != 0 && j != c)
                   {
                    b[m][n] = a[i][j];
                     if (n < (k - 2))
                      n++;
                     else
                      {
                       n = 0;
                       m++;
                       }
                     }
                 }
               }
            det = det + s * (a[0][c] * Ideterminant_mat( k - 1,l-1,b));
            s = -1 * s;
          }
      }
      return (det);
    }
    else
    {
      printf("Error : Can't find Determinant! Given matrix is not Square Matrix \n");
      exit(0);
    }
}

//================================================
/*  COFACTOR MATRIX  */
float powerup(int e,int q)
{
  int i,re=1;
  for (i=0;i<q;i++)
  {
     re=re*e;
  }
  return re;
}
void Fcofactor_mat(int f,int g,float (*fac)[f],float (*num)[f])
{
  if(f==g)
  {
     float b[f][g];
     int p, q, m, n, i, j;
     for (q = 0;q < f; q++)
     {
       for (p = 0;p < g; p++)
        {
         m = 0;
         n = 0;
         for (i = 0;i < f; i++)
         {
              for (j = 0;j < g; j++)
              {
                if (i != q && j != p)
                {
                  b[m][n] = num[i][j];
                  if (n < (f - 2))
                      n++;
                  else
                  {
                      n = 0;
                      m++;
                  }
                }
             }
          }
          fac[q][p] = powerup(-1, q + p) * Fdeterminant_mat(f - 1 ,f - 1 , b);
        }
      }
    }
    else
    {
      printf("Error : Can't find Co-factor! Given matrix is not Square Matrix \n");
      exit(0);
    }
}
void Icofactor_mat(int f,int g,int (*fac)[f],int (*num)[f])
{
  if(f==g)
  {
     int b[f][g];
     int p, q, m, n, i, j;
     for (q = 0;q < f; q++)
     {
       for (p = 0;p < g; p++)
        {
         m = 0;
         n = 0;
         for (i = 0;i < f; i++)
         {
              for (j = 0;j < g; j++)
              {
                if (i != q && j != p)
                {
                  b[m][n] = num[i][j];
                  if (n < (f - 2))
                      n++;
                  else
                  {
                      n = 0;
                      m++;
                  }
                }
             }
          }
          fac[q][p] = powerup(-1, q + p) * Ideterminant_mat(f - 1 ,f - 1 , b);
        }
      }
    }
    else
    {
      printf("Error : Can't find Co-factor! Given matrix is not Square Matrix \n");
      exit(0);
    }
}

//===============================================
/* Inverse of MATRIX*/
void Iinverse_mat(int m,int n,int (*inverse)[n],int (*mat)[n])
{
  if(m==n)
  {
      int i,j;
      int b[m][n],fac[m][n],d;
      Icofactor_mat(m,n,fac,mat);
      Itranspose_mat(m,n,b,fac);
      d = Ideterminant_mat(m, n,mat);
      for (i = 0;i < m; i++)
        {
         for (j = 0;j < n; j++)
           {
            inverse[i][j] = b[i][j]/d;
            }
        }
  }
  else
  {
    printf("Error : Can't find Inverse! Given matrix is not Square Matrix \n");
    exit(0);
  }
}
void Finverse_mat(int m,int n,float (*inverse)[n],float (*mat)[n])
{
  if(m==n)
  {
      int i,j;
      float b[m][n],fac[m][n],d;
      Fcofactor_mat(m,n,fac,mat);
      Ftranspose_mat(m,n,b,fac);
      d = Fdeterminant_mat(m, n,mat);
      for (i = 0;i < m; i++)
        {
         for (j = 0;j < n; j++)
           {
            inverse[i][j] = b[i][j]/d;
            }
        }
  }
  else
  {
    printf("Error : Can't find Inverse! Given matrix is not Square Matrix \n");
    exit(0);
  }
}
//================================================
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

   //Searching for an element in an array of integer values
int array_search_int(int a[], int n, int find) {
   int c;

   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
    return -1;
}

//Searching for an element in an array of float values
float array_search_float(float a[], int n, float find) {
   int c;

   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
    return -1;
}

//Sum of integer array elements

int array_sum_int(int a[], int n)
  {
    int i,sum = 0;

    for(i=0;i<n;i++)
    {
      sum += a[i];
    }

    return sum;
  }

//Sum of float array elements

float array_sum_float(float a[], int n)
  {
    int i;
    float sum = 0;

    for(i=0;i<n;i++)
    {
      sum += a[i];
    }

    return sum;
  }

//Sum of integer array elements

float array_avg_int(int a[], int n)
  {
    int i,sum = 0;

    for(i=0;i<n;i++)
    {
      sum += a[i];
    }

    return sum/n;
  }

//Sum of float array elements

float array_avg_float(float a[], int n)
  {
    int i;
    float sum = 0;

    for(i=0;i<n;i++)
    {
      sum += a[i];
    }

    return sum/n;
  }
