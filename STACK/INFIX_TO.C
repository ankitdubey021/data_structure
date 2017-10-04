#include<stdio.h>
#include<conio.h>

struct stack{
  char op;
  struct stack *link;
}*top;

void push(char ch){
  struct stack *new_node;
  new_node=(struct stack*)malloc(sizeof(struct stack));
  new_node->op=ch;
  new_node->link=top;
  top=new_node;
}

char pop(){

    if(top!=NULL){
     char op=top->op;
      top=top->link;
      return op;
     }
    return 0;
}

int is_operator(char ch){
   if(ch=='/'||ch=='*'||ch=='+'||ch=='-')
    return 1;

    return 0;
}

int has_higher_pref(char c1,char c2){
  if(c1=='/')
    return 1;
  else if(c1=='*' && c2!='/')
    return 1;
  else if(c1=='+' && c2=='-')
    return 1;
  else
    return 0;
}

void infix_to_prefix(char *str){
  int i;
  char *prefix;
  int counter=0;
  for(i=0;i<strlen(str);i++){
     if(is_operator(str[i])){
	 while(top!=NULL && has_higher_pref(top->op,str[i]))
	    prefix[counter++]=pop();

	 push(str[i]);
     }
     else
      prefix[counter++]=str[i];
  }
  while(top!=NULL)
    prefix[counter++]=pop();

  printf("%s",prefix);

}

void main(){
  clrscr();
  infix_to_prefix("a+b*c-d/e");
  getch();


}
