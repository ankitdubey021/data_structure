#include<stdio.h>
#include<conio.h>
#define MAX 100

void display(int arr[],int size);
void insert(int arr[],int digit,int size);

void main(){

 int digits[MAX];
 int size,digit,pos,i;
 clrscr();
 printf("Enter the size of array  : ");
 scanf("%d",&size);

 for(i=0;i<size;i++){
  printf("Enter %d number",(i+1));
  scanf("%d",&digits[i]);
 }

//print all elements of array
display(digits,size);


//insert new element
printf("\nenter the number you want to insert");
scanf("%d",&digit);
printf("\nenter position of the digit");
scanf("%d",&pos);

for(i=size;i>=pos;i--){
 digits[i]=digits[i-1];
}
digits[i]=pos;

display(digits,size+1);


//delete an element
printf("\nenter position of the digit you want to delete");
scanf("%d",&pos);
for(i=pos-1;i<size;i++)
	digits[i]=digits[i+1];

display(digits,size);


getch();
}

void display(int arr[],int size){
	int i=0;
	for(;i<size;i++)
		printf("%d\t",arr[i]);

}
