#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
}*root;

void add(){
   struct node *parent=root,*temp;

   temp=(struct node*)malloc(sizeof(struct node));
   puts("Enter the number");
   scanf("%d",&temp->data);
   temp->left=NULL;
   temp->right=NULL;

   if(root==NULL)
     root=temp;
     else{
	struct node *cur=root;
	while(cur){
	  parent=cur;
	  if(temp->data > cur->data)
	    cur=cur->right;
	    else
	     cur=cur->left;

       }

       if(parent->data > temp->data)
	  parent->left=temp;
       else
	  parent->right=temp;
       }
}

void del(){
 int item;
 struct node *parent,*cur=root;
 puts("Enter a number");
 scanf("%d",&item);

 while(cur!=NULL){
   if(cur->data==item)
   break;
   parent=cur;
    if(cur->data>item)
     cur=cur->left;
     else
      cur=cur->right;
 }

 if(cur==NULL)
   puts("item not found!");
   else{
     if(cur->left==NULL && cur->right==NULL){
	if(parent->data>item)
	  parent->left=NULL;
	  else
	  parent->right=NULL;
     }
     else
      puts("unable to delete a parent node");
   }

 }

void display(struct node *k){

 if(root==NULL){
  printf("NO element to display");
  return;
  }
  else{

    if(k->left!=NULL)
      display(k->left);

      printf("%d->",k->data);
      if(k->right!=NULL)
       display(k->right);
  }
}

void main(){
  clrscr();
  add();
  add();
  add();
  add();
  add();
  display(root);
  del();
  display(root);
  getch();
}
