#include<stdio.h>
#include<conio.h>

struct node{
 int item;
 struct node *link;
}*root;

void add(){
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter the element");
 scanf("%d",&temp->item);
 temp->link=root;
	if(root==NULL){
	  root=temp;
	  temp->link=root;
		}
	  else{
	    struct node *k=root;
	     while(k->link!=root)
	       k=k->link;

	       k->link=temp;
	  }
}

void display(){
	struct node *k=root;
	do{
	  printf("%d\t",k->item);
	  k=k->link;
	}while(k!=root);
}

void main(){
 clrscr();
 add();
 add();
 add();
 add();
 display();
 getch();
}
