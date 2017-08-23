/*
selection sort
*/
#include<stdio.h>
#include<conio.h>
void main(){
 int digits[]={5,2,9,6,0};
 int i,j,temp;
  for(i=0;i<5;i++)
  printf("%d\t",digits[i]);
 for(i=0;i<4;i++){
  for(j=i+1;j<5;j++){
   if(digits[i]>digits[j]){
    temp=digits[i];
    digits[i]=digits[j];
    digits[j]=temp;
   }
  }
 }
 printf("\nAfter sorting \n");
 for(i=0;i<5;i++)
  printf("%d\t",digits[i]);
  getch();
 }
