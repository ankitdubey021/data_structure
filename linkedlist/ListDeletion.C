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

	int length(){
	  struct node *temp=root;
	  int count=0;
	  while(temp!=NULL){
	   count++;
	   temp=temp->link;
	  }
	  return count;

	}

	void deleteNode(){
	  struct node *temp,*d;
	  int loc;
	  printf("\nEnter the location of node to delete\t");
	  scanf("%d",&loc);

	  if(loc>length())
	   puts("Location Not Found!");

	   else if(loc==1){
	     temp=root;
	     root=temp->link;
	     temp->link=NULL;
	   }
	   else {
	     int i;
	     temp=root;
	     for(i=1;i<loc-1;i++){
		temp=temp->link;
	     }
	     d=temp->link;
	     temp->link=d->link;
	     d->link=NULL;
	   }
	  }

	void main(){
	 int choice;
	 while(1){
	  clrscr();
	  printf("\n1. Insert Element in Linked List");
	  printf("\n2. Insert at beginning");
	  printf("\n3. Display all elements");
	  printf("\n4. Count all elements");
	  printf("\n5. Delete a node");
	  printf("\n6. Exit");
	  printf("\nChoose your choice\t");
	  scanf("%d",&choice);

	 if(choice==6)break;

	 switch(choice){

	 case 1: add();
		 puts("element has been added!\nPress enter to continue....");
		 getch();
		 break;
	 case 2: addAtBegin();
		 puts("element has been added At beginning! \nPress enter to continue....");
		 getch();
		 break;
	 case 3: display();
		 puts("press enter to continue...");
		 getch();
		 break;
	 case 4: printf("\n%d",length());
		 puts("press enter to continue...");
		 getch();
		 break;
	 case 5:
		 display();
		 deleteNode();
		 display();
		 puts("\nElement has been deleted...\npress enter");

		 getch();
		 break;
	 default: puts("Please enter valid choice...");
		  getch();
		  break;
	 }
	 }//while
	 puts("Thanks for visiting!");
	 getch();
	}
