#include<stdlib.h>
#include<stdio.h>

struct vector
{
	int idata;
	char cdata;
	float fdata;
	struct vector* next;
};

int is_empty(struct vector* start)
{
	if(start->next==NULL)
	return(1);
	
	else
	return(0);
}

struct vector* create_vector()
{
	struct vector* node;
	
	node=(struct vector*)malloc(sizeof(struct vector));
	
	node->next=NULL;
	
	return(node);
}

void insert_last(struct vector* start, float data)
{
     struct vector *temp;
     struct vector *node;
     
     node = create_vector();
     
     temp=start;
	 
	 while(temp->next!=NULL)
	{
	   	temp = temp->next;
	}
	 
	 temp->next=node;
	 node->idata=data;
	 node->cdata=data;
	 node->fdata=data;
	 node->next=NULL;
}

void insert_first(struct vector* start, float data)
{
     struct vector *node = create_vector();
     
     node->next=start->next;
	 start->next=node;
	 node->idata=data;
	 node->cdata=data;
	 node->fdata=data;
}

void insert_at(struct vector* start, int index, float data)
{
	struct vector* temp = start;
	struct vector* node = create_vector();
	int c=-1;
	
	if(index==0)
	insert_first(start, data);
	
	else if(index==vector_length(start))
	insert_last(start, data);
	
	else if(index>vector_length(start)  || index<0)
	{
		printf("\nError: large/invalid index passed to insert_at() function\n");
		exit(0);
	}
	
	else
	{
		while(temp->next!=NULL && c!=index-1)
		{
			c++;
			temp = temp->next;
		}
		
		node->next = temp->next;
		temp->next = node;
		node->idata = data;
		node->cdata = data;
		node->fdata = data;
	}
}

void delete_first(struct vector* start)
{
	if(!is_empty(start))
	{
		struct vector* temp = start->next;
	
		start->next=temp->next;
	
		free(temp);
	}
	
	else
	{
		printf("\nError: vector is empty");
		exit(0);
	}	
}

void delete_last(struct vector* start)
{
	if(!is_empty(start))
	{
		struct vector* temp = start->next;
		struct vector* store;
	
		while(temp->next->next!=NULL)
		temp=temp->next;
	
		store = temp->next;
		temp->next = NULL;
	
		free(store);
	}
	
	else
	{
		printf("\nError: vector is empty");
		exit(0);
	}
}


void delete_at(struct vector* start, int index)
{
	struct vector* temp = start;
	struct vector* store;
	int c=-1;
	
	if(index==0)
	delete_first(start);
	
	else if(index==vector_length(start))
	delete_last(start);
	
	else if(index>vector_length(start) || index<0)
	{
		printf("\nError: large/invalid index passed to delete_at() function\n");
		exit(0);
	}
	
	else
	{
		while(temp->next!=NULL && c!=index-1)
		{
			c++;
			temp = temp->next;
		}
		
        store = temp->next;
        temp->next = store->next;
        
        free(store);
	}
}

void display_int(struct vector* start)
{
	if(!is_empty(start))
	{
		struct vector *temp;
		temp=start->next;
	
	
		while(temp!=NULL)
   		{
    		printf("%d  ",temp->idata);
    		temp=temp->next;
		}
	}
	
	else
	{
		printf("\nError: vector is empty");
		exit(0);
	}
	
}

void display_char(struct vector* start)
{
	if(!is_empty(start))
	{
		struct vector *temp;
		temp=start->next;
	
	
		while(temp!=NULL)
   		{
    		printf("%c  ",temp->cdata);
    		temp=temp->next;
		}
	}
	
	else
	{
		printf("\nError: vector is empty");
		exit(0);
	}
	
}

void display_float(struct vector* start)
{
	if(!is_empty(start))
	{
		struct vector *temp;
		temp=start->next;
	
	
		while(temp!=NULL)
   		{
    		printf("%f  ",temp->fdata);
    		temp=temp->next;
		}
	}
	
	else
	{
		printf("\nError: vector is empty");
		exit(0);
	}
	
}

float display_first(struct vector* start)
{
	if(!is_empty(start))
		return(start->next->fdata);
	
	else
	{
		printf("\nError: vector is empty");
		exit(0);
	}
}

float display_last(struct vector* start)
{
	if(!is_empty(start))
	{
		struct vector *temp;
		temp=start->next;
        int c=0;	
	
		while(temp!=NULL && c!=vector_length()-1)
   		{
    		c++;
    		temp=temp->next;
		}
		
		return(temp->fdata);
	}
	
	else
	{
		printf("\nError: vector is empty");
		exit(0);
	}
}

float display_at(struct vector* start, int index)
{
	struct vector* temp = start;
	struct vector* store;
	int c=-1;
	
	if(index==0)
	display_first(start);
	
	else if(index==vector_length(start))
	display_last(start);
	
	else if(index>vector_length(start) || index<0)
	{
		printf("\nError: large/invalid index passed to display_at() function\n");
		exit(0);
	}
	
	else
	{
		while(temp->next!=NULL && c!=index-1)
		{
			c++;
			temp = temp->next;
		}
		
        return(temp->next->fdata);
	}
}

int vector_length(struct vector* start)
{
	struct vector* temp = start->next;
	int count=0;
	
	while(temp!=NULL)
	{
		count++;
		temp = temp->next;
	}
	
	return(count);
}
