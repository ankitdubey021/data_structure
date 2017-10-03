#include<stdio.h>
#include<conio.h>
void tower(int n,char src,char aux, char dest){
  if(n==1)
    printf("\n%c  ---->   %c",src,dest);
  else{
     tower(n-1,src,dest,aux);
     tower(1,src,aux,dest);
     tower(n-1,aux,src,dest);
  }
}
void main(){
  int num;
  clrscr();
  puts("enter number of blocks");
  scanf("%d",&num);
  tower(num,'S','A','D');
  getch();
}