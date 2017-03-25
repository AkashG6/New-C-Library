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

} // END OF MAIN





