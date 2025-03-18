#include<stdio.h>
void rea(int arr[],int size){
	int marr[size];
	for (int i=0;i<size;i++){
		printf("Enter the element for the position %d:",i+1);
		scanf("%d",&marr[i]);
		}
		
		}
void display(int arr[],int size){
	for (int j=0;j<size;j++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	}
int main(){
	
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	rea(arr,size);
	display(arr,size);
	return 0;
}
