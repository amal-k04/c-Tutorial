#include<stdio.h>
void largest(int arr[],int size){
    int smallest=arr[0];
    
    for (int j=1;j<size;j++){
        if (arr[j]<smallest){
            
            smallest=arr[j];
            
        }
        
    }
    printf("The secong largest element among the list is %d",smallest);
}
int main(){
    
    int size,i;
    printf("Enter the size of array:");
    scanf ("%d",&size);
    int arr[size];
    for (i=0;i<size;i++){
        printf("Enter the element");
        scanf("%d",arr[i]);
    }
    smallest(arr,size);
    return 0;
}
