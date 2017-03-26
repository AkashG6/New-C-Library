#include<stdio.h>
#include "vector.h"

int main()
{
    struct vector* vname = create_vector();
    
    insert_first(vname, 65);
    
    insert_first(vname, 88);
	  
	insert_last(vname,122);
	
	insert_at(vname, 2, 77);
	
	replace_at(vname, 2, 221);
	
	int first = (int) get_first(vname);
	printf("\nFirst:%d",first);
	
	printf("\nLast:%c",(char) get_last(vname));
	
	printf("\nAt:%f",(float) get_at(vname, 1));
	
	
    printf("\nVname Before:");
    display_int(vname);
    
	printf("\nLenght before:%d",vector_length(vname));
    
    printf("\nContains:%d",contains(vname, 88));
    
    printf("\nIndex of:%d",index_of(vname, 77));
    
    printf("\nIndex of:%d",index_of(vname, 98));
    
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
	
	insert_last(new_vname, 88);
	insert_last(new_vname, 88);
	insert_last(new_vname, 98);
	insert_last(new_vname, 90);
	
	printf("\n");
    
	display_int(new_vname);
    printf("\n");
    
    //printf("\nRemove last occurrence:%d", remove_last_occurr(new_vname, 88));
	
	printf("\nLast Index of:%d",last_index_of(new_vname, 88));
	
	printf("\n");
	display_int(new_vname);
	
	printf("\nLenght new vname:%d",vector_length(new_vname));
	
}
