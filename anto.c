#include<stdio.h>
#include "vector.h"

int main()
{
	struct vector* ilist = create_vector();
	
	insert_last(ilist, 98);
	insert_last(ilist, 121);
	insert_last(ilist, 75);
	insert_first(ilist, 89);
	
	delete_first(ilist);
	delete_last(ilist);
	
	insert_first(ilist, 100);
	
	insert_at(ilist, 3, 67);
	
	delete_at(ilist, 3);
	
	int i = (int) display_first(ilist);
	char c = (char) display_last(ilist);
	float f = (float) display_at(ilist,3);
	printf("%d",i);
	printf("\n%c",c);
	printf("\n%f",f);
	
	int count = vector_length(ilist);
	
	printf("\nilist:");
	display_int(ilist);
	printf("\nclist:");
	display_char(ilist);
	printf("\nflist:");
	display_float(ilist);
	
	printf("\nilistt length:%d",count);
	
	struct vector* dlist = clone_vector(ilist);
	printf("\ndlist:");
	display_int(dlist);
	printf("\ndlist:");
	display_char(dlist);
	printf("\ndlist:");
	display_float(dlist);
	
	clear_vector(ilist);
	printf("\nilist length:%d",vector_length(ilist));
	
	printf("\ndlist:");
	display_int(dlist);
	printf("\ndlist:");
	display_char(dlist);
	printf("\ndlist:");
	display_float(dlist);
	
}
