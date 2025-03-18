#include<stdio.h>
void sum_arr( int arr[],int size)
{
	int sum=0;
	for (int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	printf("The sum of elements in array is %d",sum);
}

int main(){
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	for (int j=0;j<size;j++){
		printf("Enter the element for the postion %d:",j+1);
		scanf("%d",&arr[j]);
	}
	
	sum_arr(arr,size);
	return 0;
	
}
