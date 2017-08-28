#include<stdio.h>
#include<conio.h>

void reverse(char *s1){
	char *temp=s1;
	int l=0,i,j;

	while(*temp){
	l++;
	temp++;
	}

	i=0;
	j=l-1;
	while(i<=j){
	  char t;
	  t=s1[i];
	  s1[i]=s1[j];
	  s1[j]=t;
	  i++;
	  j--;
	}

}

void main(){
 char name[]="abc";


 clrscr();
 reverse(name);
 printf("%s",name);

 getch();
}
