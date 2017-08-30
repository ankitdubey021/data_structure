#include<stdio.h>
#include<conio.h>

	struct node{
	  int data;
	  struct node *link;
	}*root;

	void add(){
	  struct node *temp;
	  temp=(struct node*)malloc(sizeof(struct node));
	  printf("Enter a number\t");
	  scanf("%d",&temp->data);
	  temp->link=NULL;

	  if(root==NULL)
	   root=temp;


	   else{
	     struct node *k;
	     k=root;
	     while(k->link!=NULL)
	       k=k->link;

	     k->link=temp;
	   }

	}

	void display(){
	  while(root!=NULL){
	    printf("%d\t",root->data);
	    root=root->link;
	  }
	}
	void main(){
	 clrscr();
	 add();
	 add();
	 display();
	 getch();
	}
