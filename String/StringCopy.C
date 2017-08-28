#include<stdio.h>
#include<conio.h>

void stcpy(char *s1,char *s2){
  while(*s2!=0){
    *s1=*s2;
    s1++;
    s2++;
  }
  *s1='\0';
}

void main(){
 char str1[]="Hari";
 char str2[20];
 clrscr();
 stcpy(str2,str1);
 printf("%s",str2);
 getch();
}
