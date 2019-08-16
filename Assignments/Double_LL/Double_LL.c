
/*********************************************************/
/* Author      :Munusamy M                               */
/* Date        :16-08-2019                               */
/* Filename    :Double_LL.c                              */
/* Description :Double_Linked_List                       */
/*                                                       */
/*********************************************************/

#include "Double_LL.h"

struct node 
{
	struct node *prev;
	int regno;
	char *name;
	struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;

void insert_node_last(int data,char *name_ptr);
void insert_node_first(int data,char *name_ptr);

void insert_node_first(int data , char *name_ptr)
{
	struct node *ptr=(struct node *)malloc (sizeof(struct node));
	ptr->regno = data;
        ptr->name  = name_ptr;
        
	if(head==NULL)	
	{
		last=ptr;
	}
	else
	{
		head->prev=ptr;
	}
	ptr->next=head;
	head=ptr;
	head->prev=NULL;
}

void insert_node_last(int data,char *name_ptr)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->regno = data;
	ptr->name  = name_ptr;
	ptr->next  = NULL;

	if(head==NULL)
	{
		head=ptr;
		last=ptr;
		ptr->prev=NULL;
	}

	else
	{
		last->next = ptr;
		ptr->prev  = last;
		last       = ptr;
	}
}


void delete_node_first();
void delete_node_first()

{
    if(head->next == NULL)
    {
	    head = NULL;
	    last = NULL;
    }
    else
    {
     head = head->next;
     head->prev = NULL;
    }
}


void delete_node_last();
void delete_node_last()
{
	if(last->prev==NULL)
	{
		head = NULL;
		last = NULL;
	}
	else
	{
		last = last->prev;
		last->next = NULL;

        }	
}

struct node *print_ptr;
void print_list();
int main()
{

  insert_node_first (1,"Naveen");
  insert_node_first (2,"Sugu");
  insert_node_first (3,"Perumal");
  insert_node_first (4,"Munusamy");
  print_ptr=head;
  
  printf("After insertion \n \n");
  print_list();

  print_ptr=last;

  delete_node_last();
  printf("\n After Deletion First  Node \n \n");
  print_ptr = head ;
  print_list();

  print_ptr = last;

  delete_node_last();
}

void print_list()
{
	int i=0;
	while(print_ptr != NULL)
	{
           i++;
	   printf(" Node %d Regno: %d Name: %s\n",i,print_ptr->regno,print_ptr->name);
	   print_ptr = print_ptr->next;
	}

   print_ptr = last;
   while (print_ptr != NULL)
   {
	   printf(" Node %d Regno: %d Name: %s\n",i,print_ptr->regno,print_ptr->name);
           i--;
	   print_ptr = print_ptr->prev;
   }
} 
