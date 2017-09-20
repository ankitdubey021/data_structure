#include<stdio.h>
#include<conio.h>
#define MAX 5
int digits[MAX];
int front=-1,rear=-1;

void add(){

  if(rear==MAX-1)
   printf("Queue is full");
   else{
    int num=0;
    puts("Enter a number");
    scanf("%d",&num);

     digits[++rear]=num;

     if(front==-1)
       front=0;

  }
}

void del(){

  if(front==-1)
    printf("queue is empty");
    else{

       digits[front]=0;
       if(front==0&&rear==0)
	front=rear=-1;
	else
	 front++;
    }
}
void display(){
 int i=front;
 for(;i<=rear;i++)
   printf("%d\n",digits[i]);

}
void main(){
clrscr();
add();
add();
add();
display();
del();
display();
getch();

}
