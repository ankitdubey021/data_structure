#include<stdio.h>
#include<conio.h>

void join(char *s1,char *s2){
  while(*s1)
	s1++;
  while(*s2)
    *s1++=*s2++;

  *s1='\0';
}

void main(){
 char fname[]="Hari";
 char lname[]="Krishna";
 clrscr();
 join(fname,lname);
 printf("%s",fname);
 getch();
}
