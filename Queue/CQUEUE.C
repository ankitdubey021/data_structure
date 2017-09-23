#include<stdio.h>
#include<conio.h>
#define SIZE 5

int digits[SIZE];
int front=-1,rear=-1;

void add(){
  if((rear==SIZE-1 && front==0)||( front==rear+1))
   puts("Queue is full");
  else{
    int num;
    puts("Enter a number");
    scanf("%d",&num);

    if(rear==SIZE-1)
      rear=0;
      else
       rear++;

    digits[rear]=num;

    if(front==-1)
     front=0;
  }

}

void del(){
  if(front==-1 && rear==-1)
   puts("Queue is empty");

   else if(front==rear){
     digits[front]=0;
     front=-1;
     rear=-1;
   }
   else{
      digits[front]=0;
      if(front==SIZE-1)
       front=0;
       else
       front++;

  }
}
void display(){
  int i;
  for(i=0;i<SIZE;i++){
   printf("%d\t",digits[i]);
  }
}

void main(){
 clrscr();
 add();
 add();
 add();
 add();
 add();
 display();
 add();

del();
display();
getch();

}