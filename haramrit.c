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
