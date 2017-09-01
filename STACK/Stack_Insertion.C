#include<stdio.h>
#include<conio.h>
#define MAX 5

int stack[MAX];
int top=-1;

int isFull(){
  if(top==MAX-1)
	return 1;
  else
      return 0;
}

int isEmpty(){
  if(top<0)
   return 1;
   else
   return 0;
}
void push(){

  if(isFull())
   printf("Stack is full!");
   else{
     int i;
     printf("Enter a number");
     scanf("%d",&i);
     top++;
     stack[top]=i;
     puts("item has been added");
   }
}

void pop(){

 if(isEmpty())
  puts("Stack is empty!");

 else{
   stack[top]=0;
   top--;
   puts("item is removed");
 }
}

void display(){
 int i;
 for(i=top;i>=0;i--){
   printf("%d\n",stack[i]);
 }
}
void main(){

 clrscr();

 push();
 push();
 push();
 display();
 getch();

}
