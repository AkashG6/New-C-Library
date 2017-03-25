#include<stdio.h>
#include "vector.h"

int main()
{
	struct vector* ilist = create_vector();
	
	insert_last(ilist, 'a');
	insert_last(ilist, 'b');
	insert_last(ilist, 'c');
	insert_first(ilist, 'z');
	
	delete_first(ilist);
	delete_first(ilist);
	delete_last(ilist);
	
	printf("\nilist:");
	display_int(ilist);
	printf("\nclist:");
	display_char(ilist);
	printf("\nflist:");
	display_float(ilist);
}
