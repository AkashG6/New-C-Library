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
	
	int count = vector_length(ilist);
	
	printf("\nilist:");
	display_int(ilist);
	printf("\nclist:");
	display_char(ilist);
	printf("\nflist:");
	display_float(ilist);
	
	printf("\nilsit length:%d",count);
}
