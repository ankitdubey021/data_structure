#include<stdio.h>
#include<conio.h>
void display(int digits[]){
int i;
printf("\n");
for(i=0;i<10;i++){
  printf("%d\t",digits[i]);
 }
 }
 int divide(int a[],int lower,int high){
	int temp,p,q,pivot;
	p=lower+1;
	q=high;
	pivot=a[lower];



      while(q>=p){
	while(a[p]<pivot)
	   p++;

	while(a[q]>pivot)
	   q--;


	   if(q>p){
	     temp=a[p];
	     a[p]=a[q];
	     a[q]=temp;
	   }
      }
      temp=a[lower];
      a[lower]=a[q];
      a[q]=temp;

      return q;

}

void quicksort(int arr[],int low,int high){
  int i;


  if(high>low){

   i=divide(arr,low,high);

   quicksort(arr,low,i-1);
   quicksort(arr,i+1,high);
   }

}

void main(){
 int digits[]={7,1,3,4,2,9,6,8,5,0};
 int i;
 clrscr();
 printf("\nBefore sorting\n");
 for(i=0;i<10;i++){
  printf("%d\t",digits[i]);
 }
 quicksort(digits,0,9);

 printf("\nAfter sorting\n");
 for(i=0;i<10;i++){
  printf("%d\t",digits[i]);
 }
getch();
}

