#include<stdio.h>
#include"bin.h"

int main()
{
	int n;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int i, a[n];
	
	printf("Enter the elements of the array:\n");
	
	for(i= 0; i< n; i++)
	scanf("%d", &a[i]);
	
	int dec= bin_to_dec(a, n);
	
	printf("The decimal equivalent is: %d",dec);
	
	return 0;
}
