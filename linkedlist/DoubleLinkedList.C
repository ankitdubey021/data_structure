#include<stdio.h>
#include<conio.h>

struct node{
  int data;
  struct node *left;
  struct node *right;
}*root;

void add(){

  struct node *k,*cur=root;
  k=(struct node*)malloc(sizeof(struct node));
  puts("Enter the number");
  scanf("%d",&k->data);
  k->left=k->right=NULL;

  if(root==NULL)
	root=k;
  else{
      while(cur->right!=NULL)
	cur=cur->right;

      cur->right=k;
      k->left=cur;
  }
}

void display(){
  struct node *cur=root;
  while(cur!=NULL){
    printf("%d\t",cur->data);
    cur=cur->right;
  }
  puts("in descending order");
  cur=root;
  while(cur->right!=NULL)
   cur=cur->right;

   while(cur!=NULL){
     printf("%d\t",cur->data);
     cur=cur->left;
   }
}

void main(){
clrscr();
add();
add();
add();
display();
getch();
}
