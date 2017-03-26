#include<stdio.h>
#include"bin.h"
#include<time.h>
int main()
{
	/*
	int n;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int i, a[n], arr[n];
	
	printf("Enter the elements of the array:\n");
	
	for(i= 0; i< n; i++)
	scanf("%d", &arr[i]);
	
	////////////////////////////////////////////////Binary to decimal 
	
	int dec= bin_to_dec(a, n);
	
	printf("The decimal equivalent is: %d",dec);*/
	
	/////////////////////////////////////////////////Twos complemenet
	/*/a[n] = *twos_complement(a,arr,n);
	
	printf("Twos complement: ");
	
	for(i= 0; i< n; i++)
	printf("%d ", a[i]);*/
	
	/////////////////////////////////////////////////Bin add mult diff
	/*int n, n1, n2, i, ans;
	
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
	
	a[n]= *bin_diff(a, n, arr1, n1, arr2, n2);
	
	printf("Difference: ");
	
	for(i= 0; i< n; i++)
	printf("%d ",a[i]);*/
	
	///////////////////////////////////////////Octal to bin and bin to octal
	int n, n1;
	
	printf("Enter the size of the source array: ");
	scanf("%d",&n1);
	printf("Enter the size of the destination array: ");
	scanf("%d",&n);
	
	int i, a[n], arr[n1];
	
	printf("Enter the elements of the array:\n");
	
	for(i= 0; i< n1; i++)
	scanf("%d", &arr[i]);
	
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	a[n]= *	octa_to_bin(a, n, arr, n1);
	end = clock();	
	printf("Bin: ");
	
	for(i= 0; i< n; i++)
	printf("%d ", a[i]);
	
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	
	printf("CPU time used: %f \n",cpu_time_used);
	/////////////////////////////////////////////Octa to dec
	/*int n, i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int a[n];
	for(i= 0; i< n; i++)
	scanf("%d",&a[i]);
	
	int dec= octa_to_dec(a, n);
	
	printf("Decimal: %d",dec);
	
	return 0;*/
	
	///////////////////////////////////////////dec to octa

	/*int n, i, dec;
	printf("Enter the decimal number: ");
	scanf("%d",&dec);
	printf("Enter destination array size: ");
	scanf("%d",&n);
	int a[n];
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	a[n]= *dec_to_octa(a, n, dec);
	end = clock();
	printf("Octa: ");
	for(i= 0; i< n; i++)
	printf("%d ",a[i]);
	
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	
	printf("CPU time used: %f \n",cpu_time_used);
	/////////////////////////////////////////////hamming_7
	/*int n, n1, i;
	printf("Enter the number of data bits: ");
	scanf("%d", &n1);
	printf("Enter destination array size: ");
	scanf("%d", &n);
	int a[n], arr[n1];
	for(i= 0; i< n1; i++)
	scanf("%d",&arr[i]);
	
	a[n]= *hamming_12(a, n, arr, n1, 1);
	
	for(i= 0; i< n; i++)
	printf("%d ", a[i]);*/
}
