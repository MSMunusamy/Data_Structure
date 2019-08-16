
/*********************************************************/
/* Author      :Munusamy M                               */
/* Date        :16-08-2019                               */
/* Filename    :Single_Circular_LL_header.c              */
/* Description :Single Circular Linked List              */
/*                                                       */
/*********************************************************/

#include "Single_LL.h"
struct node
{
	int data;
	struct node *next;

};
struct node *head =NULL;
struct node *print_ptr=NULL;


int main()
{
	struct node *ptr1=(struct node*)malloc(sizeof(struct node));
	ptr1->data=1;
	ptr1->next=NULL;
	
	
	struct node *ptr2=(struct node*)malloc(sizeof(struct node));
	ptr2->data=9;
	ptr2->next=NULL;


	head=ptr1;
	ptr1->next=ptr2;
	printf(A"\n Before Insertion a Value \n"D);
	print_list();
	
	struct node *new_ptr=(struct node*)malloc(sizeof(struct node));
	new_ptr->data=10;
	new_ptr->next=NULL;

	new_ptr->next=ptr2;
	ptr1->next=new_ptr;

       printf(B" After Insertion a Value \n"D);
       print_list();

       
       printf(C" After Deletion a Value \n"D);
       ptr1->next=ptr2;
       new_ptr->next=NULL;
       print_list();


       free(ptr1);
       free(ptr2);
       free(new_ptr);
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
