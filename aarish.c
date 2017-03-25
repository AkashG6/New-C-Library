#include<stdio.h>
#include"bin.h"

int main()
{
	int n;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int i, a[n], arr[n];
	
	printf("Enter the elements of the array:\n");
	
	for(i= 0; i< n; i++)
	scanf("%d", &arr[i]);
	
	//Binary to decimal 
	/*
	int dec= bin_to_dec(a, n);
	
	printf("The decimal equivalent is: %d",dec);*/
	
	//Twos complemenet
	a[n] = *twos_complement(a,arr,n);
	
	printf("Twos complement: ");
	
	for(i= 0; i< n; i++)
	printf("%d ", a[i]);
	
	return 0;
}
