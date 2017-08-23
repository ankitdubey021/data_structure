/*
Bubble sort
*/
#include<stdio.h>
#include<conio.h>
void display(int arr[],int size){
 int i;
 printf("\n");
 for(i=0;i<size;i++)
 printf("%d\t",arr[i]);
}
void main(){
 int digits[]={5,10,3,0,24,7,9};
 int i=0,j,temp,swap=1;
 clrscr();
 display(digits,7);

 for(i=0;i<6&&swap==1;i++){
 swap=0;
  for(j=0;j<6-i;j++){
	if(digits[j]>digits[j+1]){
		temp=digits[j];
		digits[j]=digits[j+1];
		digits[j+1]=temp;
		swap=1;
	}
  }
 }

display(digits,7);

getch();

}
