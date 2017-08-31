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

	//Add a node at the beginning of the list

	void addAtBegin(){
	  struct node *temp;
	  temp=(struct node*)malloc(sizeof(struct node));
	  printf("\nEnter a number\t");
	  scanf("%d",&temp->data);
	  temp->link=NULL;

	  if(root==NULL)
	   root=temp;
	   else{
	     temp->link=root;
	     root=temp;
	   }
	}

	void display(){
	 struct node *k=root;
	  while(k!=NULL){
	    printf("%d\t",k->data);
	    k=k->link;
	  }
	}


	void main(){
	 clrscr();
	 add();
	 add();
	 display();

	 addAtBegin();
	 display();

	 getch();
	}
