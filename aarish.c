#include<stdio.h>
#include"bin.h"

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
	
	/////////////////////////////////////////////////Bin add
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
	
	a[n]= *bin_mult(a, n, arr1, n1, arr2, n2);
	
	printf("Product: ");
	
	for(i= 0; i< n; i++)
	printf("%d ",a[i]);
	
	return 0;
}
