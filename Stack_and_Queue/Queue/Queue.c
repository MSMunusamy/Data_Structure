/*********************************************************/
/* Author      :Munusamy M                               */
/* Date        :19-08-2019                               */
/* Filename    :Queue.c                                  */
/* Description :Queue Program                            */
/*                                                       */
/*********************************************************/

#include "Queue.h"
#define MAX 6 

int arr[MAX];
int front=0;
int rear =-1;
int itemcount=0;

int peek()
{
	return arr[front];
}

int isfull()
{
	if(itemcount==MAX)
		return 1;
	else
		return 0;
}

void insert(int data)
{
	if(!(isfull()))
	{
		if(rear==MAX-1)
		{
		    rear=-1;
		}
		    arr[++rear]=data;
		    itemcount++;   

	}
}	

int  main()
{
	int a;
	insert(123);
	insert(232);
	insert(345);
	insert(466);
	insert(578);
	insert(623);

	printf(BLUE"STORED QUEUE VALUES ARE \n"RESET);
        for(a=0;a<MAX;a++)
	printf(GREEN" %2d\n"RESET,arr[a]);

        printf(RED"FIRST VALUE IN THE QUEUE %d\n"RESET,peek());
}
