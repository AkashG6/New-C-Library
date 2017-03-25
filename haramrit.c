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


#include<stdio.h>
#include"array.h"

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

