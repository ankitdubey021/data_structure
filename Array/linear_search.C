#include<stdio.h>
#include<conio.h>
#define MAX 20
void main(){
 int digits[MAX];
 int size,i,num;
 printf("enter the size of array\t");
 scanf("%d",&size);
 for(i=0;i<size;i++){
   printf("Enter %d number\t",(i+1));
   scanf("%d",&digits[i]);
 }
 printf("Enter the number you want to search\t");
 scanf("%d",&num);

 for(i=0;i<size;i++)
      if(digits[i]==num)break;

      if(i==size)
       printf("number not found");
       else
	printf("number is found at %d position",(i+1));
 getch();

}
