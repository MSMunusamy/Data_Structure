

/*********************************************************/
/* Author      :Munusamy M                               */
/* Date        :16-08-2019                               */
/* Filename    :Double_Circular_LL.c                     */
/* Description :Double Circular Linked List              */
/*                                                       */
/*********************************************************/

#include "Double_Circular_LL.h"

struct node
{
	struct node *next;
    int data;
	struct node *prev;

};
struct node *head =NULL;
struct node *print_ptr=NULL;
struct node *print_ptr1=NULL;

int main()
{
	struct node *ptr1=(struct node*)malloc(sizeof(struct node));
	ptr1->data=1;
	ptr1->next=NULL;
	
	
	struct node *ptr2=(struct node*)malloc(sizeof(struct node));
        ptr1->prev = ptr2;
	ptr2->data=9;
        
	ptr2->prev=ptr1;
	ptr2->next=NULL;
    
	head=ptr1;
	ptr1->next = ptr2;
	printf(A"After insert two values\n"D);    
        print_list();

	struct node *ptr3=(struct node*)malloc(sizeof(struct node));
	ptr2->data=7;
	ptr2->next=NULL;

        ptr3->next = ptr2;
	ptr1->next = ptr3;
       
	printf(B"After Insertion three  Value \n"D);
        print_list();

       
        printf(C"After Deletion a Value \n"D);
        ptr1->next=ptr2;
       
        print_ptr1 = ptr2;
        ptr3->next=NULL;
        print_list();
      
        printf(F"printing Reverse Order\n"D);
        reverse();

        free(ptr1);
        free(ptr2);
        free(ptr3);
}
void print_list()
{
	int i=0;
	print_ptr=head;
	while(print_ptr!=NULL)
	{
		i++;
		printf("Node :%2d Data value :%2d \n",i,print_ptr->data);
		print_ptr=print_ptr->next;
	}
}

void reverse()
{
	int i=0;
	print_ptr = print_ptr1;
	while(print_ptr != NULL)
	{
		i++;
		printf(C"Node :%2d Data value :%2d \n",i,print_ptr->data);
		print_ptr = print_ptr->prev;
	}
}
