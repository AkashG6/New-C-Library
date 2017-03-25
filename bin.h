//Header file bin.h

#include<stdio.h>
#include<stdlib.h>

//Function to calculate a^b


int power(int , int );

//Function to find the decimal equivalent of a binary number

int bin_to_dec(int a[], int n)
{
	//array must be stored in such a way that MSB is at index 0 and LSB at index n-1
	//n is the length of the array	
	
	int i, dec= 0;
	
	if (n<1)
	{
		printf("Error: invalid array size passed to function bin_to_dec()\n"); //the function will throw an error if the binary number is invalid.
		exit(0);
	}

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

int power(int a, int b)
{
	if(b == 0)
	return 1;
	
	else 
	return a* power(a, b-1); 
}

// gives 1's complement of a binary number
int * ones_complement(int a[],int array[],int n)
{
	int i;

	if (n<1)
	{
		printf("Error: invalid array size passed to function ones_complement()\n"); //the function will throw an error if the binary number is invalid.
		exit(0);
	}

	for (i = 0; i < n; i++)
	{
		a[i]=array[i];
	}
	
	for (i = 0; i < n; i++)
	{
		if (array[i]==1)
		{
			a[i]=0;
		}
		else if (array[i]==0)
		{
			a[i]=1;
		}
		else
		{
			printf("Error: invalid binary number passed to function ones_complement()\n"); //the function will throw an error if the binary number is invalid.
			exit(0);
		}
	}

	return (a); 

}


// decimal to binary conversion
int * dec_to_bin(int array[],int nb,int n)
{
	if (n<0)
	{
		printf("Error: cannot pass negative number to function dec_to_bin()\n");
		exit(0);
	}

	int i,j;
	for (i = nb-1; i >=0 ; i--)
	{
		array[i]=n%2;
		n=n/2;
	}
	if (n>=1)
	{
		printf("Error: insufficient size of destination array\n");
		exit(0);
	}

	for (i = 0; i < nb; i++)
	{
		printf("%d",array[i] );
	}
	printf("\n");

	return array;
}

//Two's Complement of a binary number

int * twos_complement(int a[], int arr[], int n)
{
	if (n<1)
	{
		printf("Error: invalid array size passed to function twos_complement()\n"); //the function will throw an error if the binary number is invalid.
		exit(0);
	}	
	
	//2's complement of arr
	int flag= 0, j;
	for(j= n- 1; j>= 0; j--)
	{
		if(arr[j] > 1 || arr[j]< 0)
		{
			printf("Error: invalid binary number passed to function twos_complement())\n"); //the function will throw an error if the binary number is invalid.
			exit(0);
		}    
		
		if(flag == 0)
		{
			if(arr[j] == 1)
			flag= 1;
			
			a[j]= arr[j];
		}
				
		else
		a[j]= (arr[j]+1)%2;		
	}
	
	return (a);
}


//Function to add two binary numbers
int * bin_add(int a[], int n, int arr1[], int n1, int arr2[], int n2)
{
	//checking whether any of the array sizes are invalid
	
	if(n < n1 || n< n2 || n<= 0 || n1<= 0 || n2<= 0)
	{
		printf("Error: invalid array size passed to function bin_add()\n");
		exit(0);
	}
	
	int C= 0, s, i, j, k;
	
	for(j= 0; j< n; j++)
	a[j]= 0;
	
	//j->  a[], i-> arr1[], k-> arr2[]
	
	for(j= n- 1, i= n1- 1, k= n2- 1; (i>= 0 && k>= 0); j--, i--, k--)
	{
		if(arr1[i] > 1 || arr1[i]< 0 || arr2[k]< 0 || arr2[k]> 1)
		{
			printf("Error: invalid binary number passed to function bin_add()\n"); //the function will throw an error if the binary number is invalid.
			exit(0);
		}
		
		s= arr1[i]+ arr2[k]+ C;
		
		if(s== 1 || s== 0)
		{
			a[j]= s;
			C= 0;
		}

		else if(s == 2)
		{
			a[j]= 0;
			C= 1;
		}

		else if(s == 3)
		{
			a[j]= 1;
			C= 1;
		}
	}
	
	//Copying the elements remaining in arr1[] to a[]
	while(i>= 0)
	{
		if(C == 1)
		{
			s= arr1[i]+ C;
			
			if(s == 1)
			{
				a[j]= 1;
				C= 0;
			}
			
			else 
			a[j]= 0;
		}
		
		else
		a[j]= arr1[i];
		
		i--;
		j--;
	}
	
	//Copying the elements remaining in arr2[] to a[]
	while(k>= 0)
	{
		if(C == 1)
		{
			s= arr2[k]+ C;
			
			if(s == 1)
			{
				a[j]= 1;
				C= 0;
			}
			
			else 
			a[j]= 0;
		}
		
		else
		a[j]= arr2[k];
		
		k--;
		j--;
	}
	
	if(C == 1)
	{
		if(j == -1)
		{
			//if carry is 1 and there is no space left in th destination array, then the function throws an error
			printf("Error: invalid array size passed to function bin_add()\n");
			exit(0);
		}
		
		else
		{
			while(C != 0 && j> -1)
			{
				
				s= a[j]+ C;
				if(s == 1)
				{
					a[j]= 1;
					C= 0;
				}
				
				else
				{
					a[j]= 0;
					C= 1; 
				}
				
				j--;
				
			}
		}
	}
	
	return(a);

}

