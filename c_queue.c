#include<stdio.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

int isEmpty(){
  if(front == -1 || (front > rear))
    return 1;
  else
    return 0; 
}

int isFull(){
  if(rear == MAX-1)
    return 1;
  else
    return 0;
}

void enqueue(int val){
  if(isFull())
    printf("\nQUEUE OVERFLOW\n");
  else
    queue[++rear] = val;
}

int dequeue(){
  if(isEmpty())
    printf("\nQUEUE EMPTY\n");
  else
    return queue[front++];
}

void printQueue(){
  if(isEmpty())
    printf("\nNOTHING TO PRINT\n");
  else{
    int i;
    for(i = front; i <= rear; i++)
      printf(%d,"queue[i]");
  }    
}
