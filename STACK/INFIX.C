#include<stdio.h>
#include<conio.h>

struct stack{
  char op;
  struct stack *link;
}*top;

void push(char op){
   struct stack *temp;
   temp=(struct stack*)malloc(sizeof(struct stack));
   temp->op=op;
   temp->link=top;
   top=temp;
}

char pop(){
  if(top==NULL)
    puts("stack is empty");
  else{
     char ch;
     struct stack *temp=top;
     top=temp->link;
     ch=temp->op;
     free(temp);
     return ch;
  }
  return 0;
}
char getTop(){
  return top->op;
}

void display(){
  struct stack *cur=top;
  while(cur!=NULL){
     printf("\n%c",cur->op);
     cur=cur->link;
  }
}

int isOperator(char ch){
   if(ch==47||ch==43||ch==42||ch==45)
	return 1;
     else
	return 0;
}

int hasHighPref(char a,char b){
    if(a==47)
      return 1;
    else if(a==42 && b!=47)
      return 1;
    else if(a==43 && b==45)
      return 1;
    else
      return 0;
}

char* infixToPrefix(char *str){
  int i,counter=0;
  char *prefix;
  for(i=0;i<strlen(str);i++){

	if(isOperator(str[i])){
	  while(top!=NULL && hasHighPref(getTop(),str[i])){
	    prefix[counter++]=getTop();
	    pop();
	  }
	  push(str[i]);
	}
	else{
	 prefix[counter++]=str[i];
	}
   }
   while(top!=NULL){
     prefix[counter++]=getTop();
     pop();
   }
   return prefix;
}

void main(){
 clrscr();
 printf("%s",infixToPrefix("a+b*c-p*q"));
 getch();
}
