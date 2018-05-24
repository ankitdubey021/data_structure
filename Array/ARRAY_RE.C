#include<conio.h>
#include<stdio.h>
#define MAX 5


void revArr(int *arr);
void revMyArray(int *arr);

void main(){
	int arr[MAX]={1,5,3,7,0},i;
	clrscr();
	revMyArray(arr);
	for(i=0;i<MAX;i++)
		printf("%d\t",arr[i]);

		getch();


}
void revArr(int *arr){
	int i;
	for( i=0;i<MAX/2;i++){

	   int temp=arr[i];
	   arr[i]=arr[MAX-1-i];
	   arr[MAX-1-i]=temp;

	}
}
void revMyArray(int *arr){
	int i=0,j=MAX-1;
	while(i<j){
	   int temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	   i++;
	   j--;
	}

}
