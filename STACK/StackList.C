#include<conio.h>
#include<stdio.h>

struct stack{
  int data;
  struct stack *link;
}*top;

void push(){

  struct stack *temp;
  temp=(struct stack*)malloc(sizeof(struct stack));
  printf("Enter element \t");
  scanf("%d",&temp->data);
  temp->link=top;
  top=temp;
  puts("item has been added successfully");

}
 int pop(){
  if(top==NULL)
   puts("Stack is empty");

  else{
  int num;
  struct stack *temp=top;
  top=temp->link;
  num=temp->data;
  temp->link=NULL;
  free(temp);
  return num;
  }
  return 0;
 }

void display(){

  struct stack *temp=top;
  while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->link;
  }
}
void main(){
  clrscr();
  push();
  push();
  display();
  printf("\n%d has been removed\n",pop());
  display();
  getch();
}
