//Header file bin.h

#include<stdio.h>
#include<stdlib.h>

//Function to calculate a^b
int diff_check= 0;

int power(int , int );

//Function to find the decimal equivalent of a binary number

int bin_to_dec(int a[], int n)
{
	//array must be stored in such a way that MSB is at index 0 and LSB at index n-1
	//n is the length of the array	
	
	int i, dec= 0;
	
	if (n<1)
	{
		printf("Error: invalid array size passed to function bin_to_dec()\n"); //the function will throw an error if the array size is invalid.
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
		printf("Error: invalid array size passed to function ones_complement()\n"); //the function will throw an error if array size is invalid.
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

	return array;
}

//Two's Complement of a binary number

int * twos_complement(int a[], int arr[], int n)
{
	if (n<1)
	{
		printf("Error: invalid array size passed to function twos_complement()\n"); //the function will throw an error if array size is invalid.
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
			diff_check= 1;
			
			a[j]= arr[j];
		}
				
		else
		a[j]= (arr[j]+1)%2;		
	}
	
	return (a);
}



										//bin to hexa
char * bin_to_hexa(char a[], int n,int array[],int n1)
{
	int i,j=n-1,sum=0;
	char new_bit;
	if ((n1%4)!=0)
	{
		printf("Error: source array size passed to function bin_to_hexa() should be integral multiple of 4.\n"); //Function will throw an error if invalid array size is passed to it. 
		exit(0);	
	}

	// if (n < (n1/4)+1)
	if (n < (n1+1)/4)
	{
		printf("Error: invalid destination array size passed to function bin_to_hexa().\n"); //Function will throw an error if invalid array size is passed to it. 
		exit(0);
	}

	for (i = n1-1; i >=0 ; i--)
	{
		if(array[i]< 0 || array[i]> 1)
		{
			printf("Error: invalid binary number passed to function bin_to_hexa().\n"); //Function will throw an error if invalid binary number is passed to it. 
			exit(0);
		}

		sum = sum + array[i]*power(2, (n1-1-i)%4);

		if (i%4==0)
		{
			// printf("sum is : %d\n",sum);
			if (sum>9)
			{
				if (sum==10)
				{
					new_bit='A';
				}
				else if (sum==11)
				{
					new_bit='B';
				}
				else if (sum==12)
				{
					new_bit='C';
				}
				else if (sum==13)
				{
					new_bit='D';
				}
				else if (sum==14)
				{
					new_bit='E';
				}
				else if (sum==15)
				{
					new_bit='F';
				}
				else
				{
					printf("Error\n");
					exit(0);
				}

			}
			else
			{
				// printf("i = %d , in else, sum is %d\n",i,sum );
				//new_bit = (char) sum;
				new_bit = sum+48;
				// printf("in else new bit is : %c\n",new_bit );
			}

			a[j]=new_bit;
			// printf("a[%d] = %d\n",j,a[j] );
			j--;

			new_bit=0;
			sum = 0;
		}
		
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
	
	if(diff_check == 0)
	if(C == 1)
	{
		if(j == -1)
		{
			//if carry is 1 and there is no space left in the destination array, then the function throws an error
			printf("Error: invalid array size passed to function bin_addDDDDD()\n");
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

int * bin_mult(int a[], int n, int arr1[], int n1, int arr2[], int n2)
{
	//checking whether any of the array sizes are invalid
	
	if(n < (n1+n2) || n<= 0 || n1<= 0 || n2<= 0)
	{
		printf("Error: invalid array size passed to function bin_mult()\n");
		exit(0);
	}
	
	int C= 0, s, i, j, k, l, temp[n2], acc[n1];
	
	for(j= 0; j< n; j++)
	a[j]= 0;
	
	for(j= 0; j< n1; j++)
	acc[j]= 0;
	
	for(j= 0; j< n2; j++)
	temp[j]= arr2[j];
	
	for(k= 0; k< n2; k++)
	{
		if(temp[n2-1] == 1)
		{
			//Add
			
			for(i= n1- 1; i>= 0; i--)
			{
				s= acc[i]+ arr1[i]+ C;
		
				if(s== 1 || s== 0)
				{
					acc[i]= s;
					C= 0;
				}

				else if(s == 2)
				{
					acc[i]= 0;
					C= 1;
				}

				else if(s == 3)
				{
					acc[i]= 1;
					C= 1;
				}
			}
		}
		
		//Shift

		for(j= n2- 1; j>= 1; j--)
		temp[j]= temp[j- 1];

		temp[0]= acc[n1- 1];

		for(j= n1- 1; j>= 1; j--)
		acc[j]= acc[j- 1];

		acc[0]= C;
		C= 0;
	}
	
	//copying temp[] to a[]
	
	for(j= n- 1, l= n2- 1; l>= 0; j--, l--)
	a[j]= temp[l];
	
	for(l= n1- 1; l>= 0; l--, j--)
	a[j]= acc[l]; 
	
	return(a);
}


//function to return the difference between two binary numbers 

int * bin_diff(int a[], int n, int arr1[], int n1, int arr2[], int n2)
{
	//checking whether any of the array sizes are invalid
	
	if(n<= 0 || n1<= 0 || n2<= 0)
	{
		printf("Error: invalid array size passed to function bin_diff()\n");
		exit(0);
	}
	
	int C= 0, s, i, j, k;
	
	for(i= 0; i< n; i++)
	a[i]= 0;
	
	int dec1= bin_to_dec(arr1, n1);
	int dec2= bin_to_dec(arr2, n2);
	
	if(dec1> dec2)
	a[n]= *dec_to_bin(a, n, dec1- dec2);
	
	else
	a[n]= *dec_to_bin(a, n, dec2- dec1);
	
	return(a);
}
