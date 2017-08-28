#include<stdio.h>
#include<conio.h>

int compare(char *s1,char *s2){

  while(*s1==*s2){
     if(!(*s1))
     return 0;

     s1++;
     s2++;
  }
   return (*s1-*s2);

}

void main(){
 char fname[]="abc";
 char lname[]="Krishna";
 int i;
 clrscr();
 i=compare(fname,lname);
 printf("%d",i);
 getch();
}
