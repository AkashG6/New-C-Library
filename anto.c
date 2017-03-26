#include<stdio.h>
#include "vector.h"

int main()
{
    struct vector* vname = create_vector();
    
    insert_first(vname, 65);
    
    insert_first(vname, 88);
	  
	insert_last(vname,122);
	
	insert_at(vname, 2, 77);
	
	
	
	int first = (int) get_first(vname);
	printf("\nFirst:%d",first);
	
	printf("\nLast:%c",(char) get_last(vname));
	
	printf("\nAt:%f",(float) get_at(vname, 1));
	
	
    printf("\nVname Before:");
    display_int(vname);
    
	printf("\nLenght before:%d",vector_length(vname));
    
    printf("\nContains:%d",contains(vname, 88));
    
    struct vector* new_vname = clone_vector(vname);
    
    
	delete_first(vname);
    
    delete_last(vname);
    
	delete_at(vname, 1);

	
	printf("\nVname After:");
    display_int(vname);
    
	printf("\nLenght after:%d",vector_length(vname));
	printf("\nContains:%d",contains(vname, 55));
    
    printf("\nNew Vname:");
    printf("\n");
    
	display_int(new_vname);
    printf("\n");
    
	display_char(new_vname);
    printf("\n");
    
	display_float(new_vname);
    
	
	printf("\nLenght new vname:%d",vector_length(new_vname));
	
}
