
/*********************************************************/
/* Author      :Munusamy M                               */
/* Date        :19-08-2019                               */
/* Filename    :stack.c                                  */
/* Description :stack program push and pop operations    */
/*                                                       */
/*********************************************************/

#include "stack.h"

int MAXSIZE = 8;
int stack[8];
int top = 0;

int isempty() 
 {

	if(top == 0)
	    return 1;
	
	else
	    return 0;
  } 


int isfull() 
  {
	if(top == MAXSIZE)
	    return 1;
	else
	    return 0;
  }
int peek() 
 {
    return stack[top];
 }

int pop() 
{
  int data;
  if(!isempty()) 
    {
	data = stack[top];
	top = top - 1;
	return data;
    }
  else 
    {
	printf("Could not retrieve data, Stack is empty.\n");
    }
}

int push(int data) 
{
	int i;
	if(!isfull()) 
	{
	  top = top + 1;
	  stack[top] = data;
        }
	else
	{
	  printf("Could not insert data, Stack is full.\n");
	}
}

int main() 
{
//pushing a values in to the stack
push(16);
push(15);
push(13);
push(1);
push(7);
push(9);
push(2);
push(19);

printf(ANSI"Element at top of the stack: %d\n"RESET ,peek());
printf("Stack full: %s\n" , isfull()?"true":"false");

while(!isempty()) 
{
	int data = pop();
	printf(RED"%d\n"RESET,data);
}
printf("Stack empty: %s\n" , isempty()?"true":"false");
return 0;
}










