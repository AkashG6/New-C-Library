#include <stdio.h>
#include <stdlib.h>
#include "bin.h"


int main()
{

	// 														// ones complement
	// int i,n;
	// printf("Enter size\n");
	// scanf("%d",&n);
	// int array[n],a[n];

	// printf("enter no.\n");
	// for (i = 0; i < n; i++)
	// {
	// 	scanf("%d",&array[i]);
	// }

	// a[n] = *ones_complement(a,array,n);


	// // for (i = 0; i < n; i++)
	// // {
	// // 	printf("%d",a[i]);
	// // }
	// // printf("\n");
	// // printf("The no. was\n");
	// // for (i = 0; i < n; i++)
	// // {
	// // 	printf("%d",array[i]);
	// // }


															// dec to bin

	// int n,i,size;
	// printf("Enter a number\n");
	// scanf("%d",&n);
	// printf("Enter number of bits\n");
	// scanf("%d",&size);
	// int array[size];
	// array[size] = *dec_to_bin(array,size,n);
	// for (i = 0; i < size; i++)
	// {
	// 	printf("%d ",array[i] );
	// }
	// printf("\n");
	// printf("%d\n",n );

													// binary to hexadecimal

	// int i,n,n1;
	// printf("Enter size of source array\n");
	// scanf("%d",&n1);
	// printf("Enter size of destination array\n");
	// scanf("%d",&n);

	// char a[n];
	// int array[n1];

	// printf("enter a binary no.\n");
	// for (i = 0; i < n1; i++)
	// {
	// 	scanf("%d",&array[i]);
	// }

	// a[n] = *bin_to_hexa(a,n,array,n1);


	// for (i = 0; i < n; i++)
	// {
	// 	// printf("in .c \n");
	// 	printf("%c",a[i]);
	// }
	// printf("\n");
	// printf("The no. was\n");
	// for (i = 0; i < n1; i++)
	// {
	// 	printf("%d",array[i]);
	// }
	// printf("\n");


									// hexadecimal to binary

	// int i,n,n1;
	// printf("Enter size of source array\n");
	// scanf("%d",&n1);
	// printf("Enter size of destination array\n");
	// scanf("%d",&n);

	// int a[n];
	// char array[n1];

	// printf("enter a hexadecimal no.\n");
	// for (i = 0; i < n1; i++)
	// {
	// 	scanf(" %c",&array[i]);
	// }

	// a[n] = *hexa_to_bin(a,n,array,n1);

	// for (i = 0; i < n; i++)
	// {
	// 	printf("%d",a[i]);
	// }

	// printf("\n in main\n");
	// printf("The no. was\n");
	// for (i = 0; i < n1; i++)
	// {
	// 	printf(" %c",array[i]);
	// }
	// printf("\n");



										// decimal to hexadecimal

	// int i,n,no;
	// printf("Enter decimal number\n");
	// scanf("%d",&no);
	// printf("Enter size of destination array\n");
	// scanf("%d",&n);

	// char a[n];

	// a[n] = *dec_to_hexa(a,n,no);

	// for (i = 0; i < n; i++)
	// {
	// 	printf("%c",a[i]);
	// }
	// printf("\n");
	
	// printf("The no. was %d\n",no);

	// printf("\n");

										// hexa to decimal

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



} // END OF MAIN





