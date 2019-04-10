/*************************************/
/* Author      :Munusamy M           */
/* Date        :09-04-2019           */
/* Filename    :sort.c               */
/* Description :Sorting the values   */
/*                                   */
/*************************************/

/* User define datatype Definitions */

#include "header.h"
#define  RED "\x1b[31m"
#define  GREEN "\x1b[32m"
#define  RESET "\x1b[00m"

void sort();
void print_list();
struct node
{
	struct node *prev;
	int regno;
	char *name;
	struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;


struct node *print1 =NULL;
void insert_node (int data , char *name_ptr)
{
  struct node *ptr = (struct node *) malloc (sizeof(struct node));
  
  ptr -> regno = data;
  ptr -> name  = name_ptr;

  if( head==NULL )
  {
	  last=ptr;
  }
  else
  {
	  head-> prev=ptr;
  }
  ptr -> next=head;
  head = ptr;
  head ->prev = NULL;

}  


struct node *print_ptr;
int main()
{
	 /* Inserting data to structure   */

	int i=0;
	insert_node (9,"Naveen");
	insert_node (6,"Manticore");
	insert_node (5,"Missiles");
	insert_node(1,"ASHOK");
        insert_node(2,"VINO");
        insert_node(1,"ARUN");
        insert_node(3,"ABI");

        
	printf(GREEN"Before Insertion \n"RESET);
	print_list();

        printf(RED"\nAfter Sorting\n"RESET);
        sort();
        print_list();

	print_ptr=head;
}

void sort()
  {
   print_ptr = print1 =  head;
   int j,regno;
   char *name;
  
   /* It will execute until Fail a condition */
  
   while(print1 !=NULL)
    {
       for(j=0;j<7;j++)
       {
  
               /* If condition for checking a both values */
          if(print1->regno < print_ptr->regno)
          {
                  /*  Swapping a values */
                  regno = print_ptr->regno;
                  name  = print_ptr->name;
                  print_ptr->regno = print1->regno;
                  print_ptr->name  = print1->name;
                  print1->regno  = regno;
                  print1->name   = name;
          }
	  /* While swapping it will go next address values */
          print_ptr=print_ptr->next;
       }
       
       /* Head will give always starting address of 'struct node' */
       print_ptr=head;
       
       /* After inserting it will move one by one next address */
       print1=print1->next;
    }
  }
  
 void print_list()
  {       
          int i=0;
          /* Head will give always starting address of 'struct node' */
          print_ptr=head;
          while(print_ptr!=NULL)
         {       
                  i++;
                 printf("node %d regno %d name %s\n",i,print_ptr->regno,print_ptr->name);
                 print_ptr=print_ptr->next;
         }
 }

