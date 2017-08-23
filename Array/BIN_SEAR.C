#include<stdio.h>
#include<conio.h>
#define MAX 20

/*
  Binary search method is very fast and efficient.
  In binary search, array is need to be in sorted order.

  In this method,for searching an element in array,
  first we compare it with the number present at the center of list.
  if it matches the required element, then search is successfull,
  otherwise the list is divided into two halves.
  one from 0 to center-1 and second from center+1 to the last element.

  Now if the required number is smaller than center, we search in first half,
  other wise we search in second half.

  This procedure is repeated till the element is found or division of half
  parts gives only one element.
*/

void main(){
 int digits[MAX];
 int size,i,num,mid,lower=0,upper,flag=0;
 clrscr();
 printf("enter the size of array\t");
 scanf("%d",&size);
 for(i=0;i<size;i++){
   printf("Enter %d number\t",(i+1));
   scanf("%d",&digits[i]);
 }
 printf("Enter the number you want to search\t");
 scanf("%d",&num);
 upper=size-1;

 while(lower<=upper){

   mid=(lower+upper)/2;
   if(digits[mid]==num){
	flag=1;
	break;
   }
   else if(digits[mid]<num)
       lower=mid+1;
   else if(digits[mid]>num)
       upper=mid-1;
 }
 if(flag==1)
   printf("%d is found at %d position",num,mid+1);
   else
    printf("number not found in list");
 getch();

}