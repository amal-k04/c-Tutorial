#include<stdio.h>
void largest(int arr[],int size){
    int largest=arr[0];
    for (int j=1;j<size;j++){
        if (arr[j]>largest){
            largest=arr[j];
            
        }
        
    }
    printf("The largest element among the list is %d",largest);
}
int main(){
    
    int size,i;
    printf("Enter the size of array:");
    scanf ("%d",&size);
    int arr[size];
    for (i=0;i<size;i++){
        printf("Enter the %d element",i+1);
        scanf("%d",&arr[i]);
    }
    largest(arr,size);
    return 0;
}
