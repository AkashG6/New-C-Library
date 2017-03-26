//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$  TESTING ARRAY.H FUNCTIONS   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$



//******************************************************ARRAY_MIN_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	int x= array_min_int(a, n);
//
//	printf("array min : %d",x);
//
//	return 0;
//
//}


//******************************************************ARRAY_MAX_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	int x= array_max_int(a, n);
//
//	printf("array max : %d",x);
//
//	return 0;
//
//}

//******************************************************ARRAY_MIN_FLOAT******************************************************


//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	float x= array_min_float(a, n);
//
//	printf("array min : %f",x);
//
//	return 0;
//
//}

//******************************************************ARRAY_MAX_FLOAT******************************************************


//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	float x= array_max_float(a, n);
//
//	printf("array max : %f",x);
//
//	return 0;
//
//}

//******************************************************ARRAY_ASC_SORT_FLOAT******************************************************


//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	array_asc_sort_float(a, n);
//
//	for(i= 0; i< n; i++)
//	printf("%.4f\t", a[i]);
//
//	return 0;
//
//}

//******************************************************ARRAY_DESC_SORT_FLOAT******************************************************


//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	array_desc_sort_float(a, n);
//
//	for(i= 0; i< n; i++)
//	printf("%.4f\t", a[i]);
//
//	return 0;
//
//}

//******************************************************ARRAY_ASC_SORT_INT******************************************************


//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	array_asc_sort_int(a, n);
//
//	for(i= 0; i< n; i++)
//	printf("%d\t", a[i]);
//
//	return 0;
//
//}

//******************************************************ARRAY_DESC_SORT_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	array_desc_sort_int(a, n);
//
//	for(i= 0; i< n; i++)
//	printf("%d\t", a[i]);
//
//	return 0;
//
//}

//******************************************************ARRAY_SEARCH_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	int find;
//
//	printf("Enter element to search: ");
//	scanf("%d", &find);
//
//	int index = array_search_int(a, n, find);
//
//	if(index==-1)
//	{
//		printf("Not found\n");
//	}
//	else
//	{
//	printf("Found at index %d\n", index);
//	}
//	return 0;
//
//}

//******************************************************ARRAY_SEARCH_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	float find;
//
//	printf("Enter element to search: ");
//	scanf("%f", &find);
//
//	int index = array_search_float(a, n, find);
//
//	if(index==-1)
//	{
//		printf("Not found\n");
//	}
//	else
//	{
//	printf("Found at index %d\n", index);
//	}
//	return 0;
//
//}

//******************************************************ARRAY_SUM_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	int sum = array_sum_int(a, n);
//
//	printf("Sum is %d", sum);
//	return 0;
//
//}

//******************************************************ARRAY_SUM_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	float sum = array_sum_float(a, n);
//
//	printf("Sum is %f", sum);
//	return 0;
//
//}

//******************************************************ARRAY_AVG_INT******************************************************
//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	float avg = array_avg_int(a, n);
//
//	printf("Avg is %f", avg);
//	return 0;
//
//}


//******************************************************ARRAY_AVG_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	float avg = array_avg_float(a, n);
//
//	printf("Avg is %f", avg);
//	return 0;
//
//}

//******************************************************ARRAY_REVERSE_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	array_reverse_float(a, n);
//
//	for(i= 0; i< n; i++)
//	printf("%f\t",a[i]);
//
//	return 0;
//
//}

//******************************************************ARRAY_REVERSE_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int n, i, ans;
//
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	array_reverse_int(a, n);
//
//	for(i= 0; i< n; i++)
//	printf("%d\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_MERGE_INT******************************************************

//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	printf("Enter the size of the array B: ");
//	scanf("%d",&m);
//
//	int b[m];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< m; i++)
//	scanf("%d",&b[i]);
//
//	int x = m+n;
//
//	int c[x];
//	int * p = array_merge_int(a, n, b, m, c ,x);
//
//	for(i= 0; i<x; i++)
//	printf("%d\t",*(p+i));
//
//	return 0;
//
//}

//******************************************************ARRAY_MERGE_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	printf("Enter the size of the array B: ");
//	scanf("%d",&m);
//
//	float b[m];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< m; i++)
//	scanf("%f",&b[i]);
//
//	int x = m+n;
//
//	float c[x];
//	float * p = array_merge_float(a, n, b, m, c ,x);
//
//	for(i= 0; i<x; i++)
//	printf("%f\t",*(p+i));
//
//	return 0;
//
//}


//******************************************************ARRAY_MERGE_CHAR******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	char a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf(" %c",&a[i]);
//
//	printf("Enter the size of the array B: ");
//	scanf("%d",&m);
//
//	char b[m];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< m; i++)
//	scanf(" %c",&b[i]);
//
//	int x = m+n;
//
//	char c[x];
//	char * p = array_merge_char(a, n, b, m, c ,x);
//
//	for(i= 0; i<x; i++)
//	printf("%c\t",*(p+i));
//
//	return 0;
//
//}


//******************************************************ARRAY_SHIFT_LEFT_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	array_shift_left_int(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%d\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_SHIFT_RIGHT_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	array_shift_right_int(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%d\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_SHIFT_LEFT_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	array_shift_left_float(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%f\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_SHIFT_RIGHT_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	array_shift_right_float(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%f\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_SHIFT_LEFT_CHAR******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	char a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf(" %c",&a[i]);
//
//	array_shift_left_char(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%c\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_SHIFT_RIGHT_CHAR******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	char a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf(" %c",&a[i]);
//
//	array_shift_right_char(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%c\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_ROTATE_LEFT_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%d",&a[i]);
//
//	array_rotate_left_int(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%d\t",a[i]);
//
//	return 0;
//
//}




//******************************************************ARRAY_ROTATE_RIGHT_INT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	int a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf(" %d",&a[i]);
//
//	array_rotate_right_int(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%d\t",a[i]);
//
//	return 0;
//
//}

//******************************************************ARRAY_ROTATE_LEFT_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%f",&a[i]);
//
//	array_rotate_left_float(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%f\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_ROTATE_RIGHT_FLOAT******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	float a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf(" %f",&a[i]);
//
//	array_rotate_right_float(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%f\t",a[i]);
//
//	return 0;
//
//}


//******************************************************ARRAY_ROTATE_LEFT_CHAR******************************************************
//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	char a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf("%c",&a[i]);
//
//	array_rotate_left_char(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%c\t",a[i]);
//
//	return 0;
//
//}



//******************************************************ARRAY_ROTATE_RIGHT_CHAR******************************************************

//#include<stdio.h>
//#include"array.h"
//
//int main()
//{
//	int m, n, i, ans;
//
//	printf("Enter the size of the array A: ");
//	scanf("%d",&n);
//
//	char a[n];
//
//	printf("Enter the elements: \n");
//
//	for(i= 0; i< n; i++)
//	scanf(" %c",&a[i]);
//
//	array_rotate_right_char(a,n);
//
//	for(i= 0; i<n; i++)
//	printf("%c\t",a[i]);
//
//	return 0;
//
//}
