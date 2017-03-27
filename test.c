// To try out any of these functions simply uncomment one of them 
// You can use ctrl+F to search for function name

#include <stdio.h>
#include <stdlib.h>
#include "bin.h"
#include "array.h"
#include "vector.h"


int main()
{

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////			   bin.h			///////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// -------------------------------------------------  ones complement  ------------------------------------------------------
	/*
	int i,n;
	printf("Enter size\n");
	scanf("%d",&n);
	int array[n],a[n];

	printf("enter no.\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&array[i]);
	}

	a[n] = *ones_complement(a,array,n);


	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("The no. was\n");
	for (i = 0; i < n; i++)
	{
		printf("%d",array[i]);
	}
	*/


// -------------------------------------------------  dec to bin -------------------------------------------------------

	/*
	int n,i,size;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Enter number of bits\n");
	scanf("%d",&size);
	int array[size];
	array[size] = *dec_to_bin(array,size,n);
	for (i = 0; i < size; i++)
	{
		printf("%d ",array[i] );
	}
	printf("\n");
	printf("%d\n",n );
	*/

// -------------------------------------------------  binary to hexadecimal  -----------------------------------------

	/*
	int i,n,n1;
	printf("Enter size of source array\n");
	scanf("%d",&n1);
	printf("Enter size of destination array\n");
	scanf("%d",&n);

	char a[n];
	int array[n1];

	printf("enter a binary no.\n");
	for (i = 0; i < n1; i++)
	{
		scanf("%d",&array[i]);
	}

	a[n] = *bin_to_hexa(a,n,array,n1);

	for (i = 0; i < n; i++)
	{
		// printf("in .c \n");
		printf("%c",a[i]);
	}
	printf("\n");
	printf("The no. was\n");
	for (i = 0; i < n1; i++)
	{
		printf("%d",array[i]);
	}
	printf("\n");
	*/


// -------------------------------------------------  hexadecimal to binary  -----------------------------------------
	/*
	int i,n,n1;
	printf("Enter size of source array\n");
	scanf("%d",&n1);
	printf("Enter size of destination array\n");
	scanf("%d",&n);

	int a[n];
	char array[n1];

	printf("enter a hexadecimal no.\n");
	for (i = 0; i < n1; i++)
	{
		scanf(" %c",&array[i]);
	}

	a[n] = *hexa_to_bin(a,n,array,n1);

	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}

	printf("\n in main\n");
	printf("The no. was\n");
	for (i = 0; i < n1; i++)
	{
		printf(" %c",array[i]);
	}
	printf("\n");
	*/


// -------------------------------------------------  decimal to hexadecimal  -----------------------------------------

	/*
	int i,n,no;
	printf("Enter decimal number\n");
	scanf("%d",&no);
	printf("Enter size of destination array\n");
	scanf("%d",&n);

	char a[n];

	a[n] = *dec_to_hexa(a,n,no);

	for (i = 0; i < n; i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	
	printf("The no. was %d\n",no);

	printf("\n");
	*/

// -------------------------------------------------  hexadecimal to decimal  -----------------------------------------

	/*
	int i,n1;
	printf("Enter size of source array\n");
	scanf("%d",&n1);

	int dec;
	char array[n1];

	printf("enter a hexadecimal no.\n");
	for (i = 0; i < n1; i++)
	{
		scanf(" %c",&array[i]);
	}

	dec = hexa_to_dec(array,n1);

	printf("\n in main\n");
	printf("decimal is %d\n",dec );
	printf("The no. was\n");
	for (i = 0; i < n1; i++)
	{
		printf(" %c",array[i]);
	}
	printf("\n");
	*/


	

// -------------------------------------------------  binary to decimal  -----------------------------------------
	
	/*

	int n;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int i, a[n], arr[n];
	
	printf("Enter the elements of the array:\n");
	
	for(i= 0; i< n; i++)
	scanf("%d", &arr[i]);

	int dec= bin_to_dec(a, n);
	
	printf("The decimal equivalent is: %d",dec);
	*/
	
// -------------------------------------------------  two's complement  -----------------------------------------
	/*

	int n;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int i, a[n], arr[n];
	
	printf("Enter the elements of the array:\n");
	
	for(i= 0; i< n; i++)
	scanf("%d", &arr[i]);

	a[n] = *twos_complement(a,arr,n);
	
	printf("Twos complement: ");
	
	for(i= 0; i< n; i++)
	printf("%d ", a[i]);*/
	
// -------------------------------------------------  binary add mult diff  -----------------------------------------
	/*


	int n, n1, n2, i, ans;
	
	printf("Enter the size of the array1: ");
	scanf("%d",&n1);
	printf("Enter the size of the array2: ");
	scanf("%d",&n2);
	printf("Enter the size of the destination array: ");
	scanf("%d",&n);
	
	int arr1[n1], arr2[n2], a[n];
	
	printf("Enter the elements of array1: \n");
	for(i= 0; i< n1; i++)
	scanf("%d",&arr1[i]);
	
	printf("Enter the elements of array2: \n");
	for(i= 0; i< n2; i++)
	scanf("%d",&arr2[i]);
	
	a[n]= *bin_add(a, n, arr1, n1, arr2, n2);
	//a[n]= *bin_diff(a, n, arr1, n1, arr2, n2);
	//a[n]= *bin_mult(a, n, arr1, n1, arr2, n2);

	
	
	for(i= 0; i< n; i++)
	printf("%d ",a[i]);

	*/
	
// ---------------------------------------------  octal to binary and binary to octal  -------------------------------------
	/*

	int n, n1;
	
	printf("Enter the size of the source array: ");
	scanf("%d",&n1);
	printf("Enter the size of the destination array: ");
	scanf("%d",&n);
	
	int i, a[n], arr[n1];
	
	printf("Enter the elements of the array:\n");
	
	for(i= 0; i< n1; i++)
	scanf("%d", &arr[i]);

	a[n]= *	octa_to_bin(a, n, arr, n1);
	//a[n]= *	bin_to octa(a, n, arr, n1);


	
	for(i= 0; i< n; i++)
	printf("%d ", a[i]);
	*/
	
// ----------------------------------------------------  octal to decimal  --------------------------------------------

	/*


	int n, i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int a[n];
	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);
	
	int dec= octa_to_dec(a, n);
	
	printf("Decimal: %d",dec);
	
	return 0;*/
	
// ---------------------------------------------------  dec to octal ---------------------------------------------------


	/*


	int n, i, dec;
	printf("Enter the decimal number: ");
	scanf("%d",&dec);
	printf("Enter destination array size: ");
	scanf("%d",&n);
	int a[n];

	a[n]= *dec_to_octa(a, n, dec);

	printf("Octa: ");
	for(i= 0; i< n; i++)
	printf("%d ",a[i]);

	*/
// ---------------------------------------------  hamming (parity) 7 and 12 bits  -------------------------------------

	/*

	int n, n1, i;
	printf("Enter the number of data bits: ");
	scanf("%d", &n1);
	printf("Enter destination array size: ");
	scanf("%d", &n);
	int a[n], arr[n1];
	for(i= 0; i< n1; i++)
	scanf("%d",&arr[i]);
	
	a[n]= *hamming_12(a, n, arr, n1, 1);
	//a[n]= *hamming_7(a, n, arr, n1, 1);
	
	for(i= 0; i< n; i++)
	printf("%d ", a[i]);*/



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////			   array.h			/////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
// ----------------------------------------------------- 1 D arrays -------------------------------------------------------

	//******************************************************ARRAY_MIN_INT*************************************************
/*
#include <stdio.h>
#include array.h"

int main()
{
	int n, i;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	int x= array_min_int(a, n);

	printf("array min : %d",x);

	return 0;

}
*/


//******************************************************ARRAY_MAX_INT*******************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	int x= array_max_int(a, n);

	printf("array max : %d",x);

	return 0;

}
*/

//******************************************************ARRAY_MIN_FLOAT**********************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	float x= array_min_float(a, n);

	printf("array min : %f",x);

	return 0;

}
*/

//******************************************************ARRAY_MAX_FLOAT**********************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	float x= array_max_float(a, n);

	printf("array max : %f",x);

	return 0;

}
*/

//******************************************************ARRAY_ASC_SORT_FLOAT*******************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	array_asc_sort_float(a, n);

	for(i= 0; i< n; i++)
	printf("%.4f\t", a[i]);

	return 0;

}
*/

//******************************************************ARRAY_DESC_SORT_FLOAT********************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	array_desc_sort_float(a, n);

	for(i= 0; i< n; i++)
	printf("%.4f\t", a[i]);

	return 0;

}
*/

//******************************************************ARRAY_ASC_SORT_INT*********************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	array_asc_sort_int(a, n);

	for(i= 0; i< n; i++)
	printf("%d\t", a[i]);

	return 0;

}
*/

//******************************************************ARRAY_DESC_SORT_INT**********************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	array_desc_sort_int(a, n);

	for(i= 0; i< n; i++)
	printf("%d\t", a[i]);

	return 0;

}
*/

//******************************************************ARRAY_SEARCH_INT************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	int find;

	printf("Enter element to search: ");
	scanf("%d", &find);

	int index = array_search_int(a, n, find);

	if(index==-1)
	{
		printf("Not found\n");
	}
	else
	{
	printf("Found at index %d\n", index);
	}
	return 0;

}
*/

//******************************************************ARRAY_SEARCH_FLOAT***********************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	float find;

	printf("Enter element to search: ");
	scanf("%f", &find);

	int index = array_search_float(a, n, find);

	if(index==-1)
	{
		printf("Not found\n");
	}
	else
	{
	printf("Found at index %d\n", index);
	}
	return 0;

}
*/

//******************************************************ARRAY_SUM_INT*************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	int sum = array_sum_int(a, n);

	printf("Sum is %d", sum);
	return 0;

}
*/

//******************************************************ARRAY_SUM_FLOAT*************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	float sum = array_sum_float(a, n);

	printf("Sum is %f", sum);
	return 0;

}
*/

//******************************************************ARRAY_AVG_INT**************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	float avg = array_avg_int(a, n);

	printf("Avg is %f", avg);
	return 0;

}
*/

//******************************************************ARRAY_AVG_FLOAT************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	float avg = array_avg_float(a, n);

	printf("Avg is %f", avg);
	return 0;

}
*/

//******************************************************ARRAY_REVERSE_FLOAT***********************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	array_reverse_float(a, n);

	for(i= 0; i< n; i++)
	printf("%f\t",a[i]);

	return 0;

}
*/

//******************************************************ARRAY_REVERSE_INT***************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int n, i, ans;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	array_reverse_int(a, n);

	for(i= 0; i< n; i++)
	printf("%d\t",a[i]);

	return 0;

}
*/


//******************************************************ARRAY_MERGE_INT******************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	printf("Enter the size of the array B: ");
	scanf("%d",&m);

	int b[m];

	printf("Enter the elements: \n");

	for(i= 0; i< m; i++)
	scanf("%d",&b[i]);

	int x = m+n;

	int c[x];
	int * p = array_merge_int(a, n, b, m, c ,x);

	for(i= 0; i<x; i++)
	printf("%d\t",*(p+i));

	return 0;

}
*/

//******************************************************ARRAY_MERGE_FLOAT*************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	printf("Enter the size of the array B: ");
	scanf("%d",&m);

	float b[m];

	printf("Enter the elements: \n");

	for(i= 0; i< m; i++)
	scanf("%f",&b[i]);

	int x = m+n;

	float c[x];
	float * p = array_merge_float(a, n, b, m, c ,x);

	for(i= 0; i<x; i++)
	printf("%f\t",*(p+i));

	return 0;

}
*/


//******************************************************ARRAY_MERGE_CHAR**************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	char a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf(" %c",&a[i]);

	printf("Enter the size of the array B: ");
	scanf("%d",&m);

	char b[m];

	printf("Enter the elements: \n");

	for(i= 0; i< m; i++)
	scanf(" %c",&b[i]);

	int x = m+n;

	char c[x];
	char * p = array_merge_char(a, n, b, m, c ,x);

	for(i= 0; i<x; i++)
	printf("%c\t",*(p+i));

	return 0;

}
*/


//******************************************************ARRAY_SHIFT_LEFT_INT***********************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	array_shift_left_int(a,n);

	for(i= 0; i<n; i++)
	printf("%d\t",a[i]);

	return 0;

}
*/


//******************************************************ARRAY_SHIFT_RIGHT_INT***********************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	array_shift_right_int(a,n);

	for(i= 0; i<n; i++)
	printf("%d\t",a[i]);

	return 0;

}
*/

//******************************************************ARRAY_SHIFT_LEFT_FLOAT***********************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	array_shift_left_float(a,n);

	for(i= 0; i<n; i++)
	printf("%f\t",a[i]);

	return 0;

}
*/


//******************************************************ARRAY_SHIFT_RIGHT_FLOAT************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	array_shift_right_float(a,n);

	for(i= 0; i<n; i++)
	printf("%f\t",a[i]);

	return 0;

}
*/


//******************************************************ARRAY_SHIFT_LEFT_CHAR*************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	char a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf(" %c",&a[i]);

	array_shift_left_char(a,n);

	for(i= 0; i<n; i++)
	printf("%c\t",a[i]);

	return 0;

}
*/


//******************************************************ARRAY_SHIFT_RIGHT_CHAR**************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	char a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf(" %c",&a[i]);

	array_shift_right_char(a,n);

	for(i= 0; i<n; i++)
	printf("%c\t",a[i]);

	return 0;

}
*/


//******************************************************ARRAY_ROTATE_LEFT_INT**************************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);

	array_rotate_left_int(a,n);

	for(i= 0; i<n; i++)
	printf("%d\t",a[i]);

	return 0;

}
*/




//******************************************************ARRAY_ROTATE_RIGHT_INT*************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf(" %d",&a[i]);

	array_rotate_right_int(a,n);

	for(i= 0; i<n; i++)
	printf("%d\t",a[i]);

	return 0;

}
*/

//******************************************************ARRAY_ROTATE_LEFT_FLOAT************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%f",&a[i]);

	array_rotate_left_float(a,n);

	for(i= 0; i<n; i++)
	printf("%f\t",a[i]);

	return 0;

}
*/


//******************************************************ARRAY_ROTATE_RIGHT_FLOAT**********************************************

/*
#include<stdio.h>
#include"array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	float a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf(" %f",&a[i]);

	array_rotate_right_float(a,n);

	for(i= 0; i<n; i++)
	printf("%f\t",a[i]);

	return 0;

}
*/

//******************************************************ARRAY_ROTATE_LEFT_CHAR*************************************************
/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	char a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf("%c",&a[i]);

	array_rotate_left_char(a,n);

	for(i= 0; i<n; i++)
	printf("%c\t",a[i]);

	return 0;

}
*/



//******************************************************ARRAY_ROTATE_RIGHT_CHAR*************************************************

/*
#include <stdio.h>
#include "array.h"

int main()
{
	int m, n, i, ans;

	printf("Enter the size of the array A: ");
	scanf("%d",&n);

	char a[n];

	printf("Enter the elements: \n");

	for(i= 0; i< n; i++)
	scanf(" %c",&a[i]);

	array_rotate_right_char(a,n);

	for(i= 0; i<n; i++)
	printf("%c\t",a[i]);

	return 0;

}
*/





// ----------------------------------------------- 2 D arrays ------------------------------------------------------------
/*
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
  */


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


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////			  vectors.h			///////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 struct vector* vname = create_vector();
    
    insert_first(vname, 65);
    
    insert_first(vname, 88);
	  
	insert_last(vname,122);
	
	insert_at(vname, 2, 77);
	
	replace_at(vname, 2, 221);
	
	int first = (int) get_first(vname);
	printf("\nFirst:%d",first);
	
	printf("\nLast:%c",(char) get_last(vname));
	
	printf("\nAt:%f",(float) get_at(vname, 1));
	
	
    printf("\nVname Before:");
    display_int(vname);
    
	printf("\nLenght before:%d",vector_length(vname));
    
    printf("\nContains:%d",contains(vname, 88.000));
    
    printf("\nIndex of:%d",index_of(vname, 77));
    
    printf("\nIndex of:%d",index_of(vname, 98));
    
    struct vector* new_vname = clone_vector(vname);
    
    
	delete_first(vname);
    
    delete_last(vname);
    
	delete_at(vname, 1);

	
	printf("\nVname After:");
    display_int(vname);
    
	printf("\nLenght after:%d",vector_length(vname));
	printf("\nContains:%d",contains(vname, 55));
    
    printf("\nNew Vname:");
    printf("\n");
    
	display_int(new_vname);
    printf("\n");
    
	display_char(new_vname);
    printf("\n");
    
	display_float(new_vname);
	
	insert_last(new_vname, 88);
	insert_last(new_vname, 88);
	insert_last(new_vname, 98);
	insert_last(new_vname, 90);
	
	printf("\n");
    
	display_int(new_vname);
    printf("\n");
    
    printf("\nRemove first occurrence:%d", remove_first_occurr(new_vname, 88));
    printf("\nRemove last occurrence:%d", remove_last_occurr(new_vname, 88));
	
	printf("\nLast Index of:%d",last_index_of(new_vname, 88));
	
	printf("\n");
	display_int(new_vname);
	
	printf("\nLenght new vname:%d",vector_length(new_vname));

	*/

