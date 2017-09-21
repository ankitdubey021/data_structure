#include<stdio.h>
#include<conio.h>
#define SIZE 5
int digits[SIZE];
int front=-1,rear=-1;

void add(){
    int num;
      puts("Enter a number");
      scanf("%d",&num);

  if(front==rear+1){
   if(rear==SIZE-1)
      puts("queue is full");
  }
  else if(front==-1&&rear==-1){
       front=rear=0;
       digits[rear]=num;
  }

  else if(rear==SIZE-1){
	rear=0;
	digits[rear]=num;
  }
  else{
      rear++;
      digits[rear]=num;
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
    else if(front==SIZE-1){
	   digits[front]=0;
	   front=0;
    }

    else{
       digits[front]=0;
       front++;

    }



}



void display(){
  int i;
  if(front==-1 && rear==-1)
   puts("Queue is empty");
  else{
   puts("\n");
     for(i=0;i<5;i++)
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
 del();
 del();
 display();
 add();
 display();
 getch();


}