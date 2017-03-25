//Header file bin.h

#include<stdio.h>
#include<stdlib.h>

//Function to calculate a^b

int power(int a, int b)
{
	if(b == 0)
	return 1;
	
	else 
	return a* power(a, b-1); 
}

//Function to find the decimal equivalent of a binary number

int bin_to_dec(int a[], int n)
{
	//array must be stored in such a way that MSB is at index 0 and LSB at index n-1
	//n is the length of the array	
	
	int i, dec= 0;
	
	for(i= n- 1; i>= 0; i--)
	{
		if(a[i]< 0 || a[i]> 1)
		{
			printf("Error: invalid binary number passed to function bin_to_dec().\n"); //Function will throw an error if invalid binary number is passed to it. 
			exit(0);
		}
		
		dec= dec+ a[i]*power(2, n-1-i);
	}
	
	return dec; 
}
