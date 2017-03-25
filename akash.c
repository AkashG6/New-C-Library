#include <stdio.h>
#include <stdlib.h>
#include "bin.h"


int main()
{
															// ones complement
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


	// for (i = 0; i < n; i++)
	// {
	// 	printf("%d",a[i]);
	// }
	// printf("\n");
	// printf("The no. was\n");
	// for (i = 0; i < n; i++)
	// {
	// 	printf("%d",array[i]);
	// }


}

