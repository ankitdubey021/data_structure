#include<stdio.h>
#include<conio.h>

#define MAX 5
int digits[MAX];
int front=-1,rear=-1;

void add(){
 if((rear==MAX-1 && front==0)||(front==rear+1))
  puts("Queue is full");
  else{
    int num;
    puts("Enter a number");
    scanf("%d",&num);

     if(rear==MAX-1)
      rear=0;
      else
       rear++;

       digits[rear]=num;

      if(front==-1)
	front=0;
  }
}
void del(){
   if(front==-1&&rear==-1)
    puts("Queue is empty");
    else{
       if(front==MAX-1)
	 front=0;
	 else
	   front++;

	digits[front]=0;

       if(front==rear){
	 front=rear=-1;
       }
    }
}

void display(){

 int i;
 printf("\n");
 for(i=0;i<MAX;i++)
  printf("%d\t",digits[i]);

}

void main(){
clrscr();
add();
add();
add();
add();
add();
add();
display();
del();
add();
display();
getch();


}