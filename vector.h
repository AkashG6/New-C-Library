#include<stdlib.h>
#include<stdio.h>

struct vector
{
	int idata;
	char cdata;
	float fdata;
	struct vector* next;
};

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

void display_int(struct vector* start)
{
	struct vector *temp;
	temp=start->next;
	
	
	while(temp!=NULL)
    {
    	printf("%d  ",temp->idata);
    	temp=temp->next;
	}
	
}

void display_char(struct vector* start)
{
	struct vector* temp = start->next;
	
	while(temp!=NULL)
	{
		printf("%c  ",temp->cdata);
		temp=temp->next;
	}
}

void display_float(struct vector* start)
{
	struct vector* temp = start->next;
	
	while(temp!=NULL)
	{
		printf("%f  ",temp->fdata);
		temp=temp->next;
	}
}
