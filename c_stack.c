#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX];
int top = -1;

int isFull(){
  if(top == MAX-1)
    return 1;
  else
    return 0; 
}

int isEmpty(){
  if(top == -1)
    return 0;
  else
    return 1;
}

void push(int val){
  if(isFull())
    printf("\nSTACK OVERFLOW\n");
  else
    stack[++top] = val;
}

int pop(){
  if(isEmpty())
    printf("\nSTACK EMPTY\n");
  else
    return stack[top--];
}

int peek(){
  if(isEmpty())
    printf("\nSTACK EMPTY\n");
  else
    return stack[top];
}
