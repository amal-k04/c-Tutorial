#include<stdio.h>
void smallest(int arr[],int size){
    int smallest=arr[0],sec_smallest;
    
    for (int j=1;j<size;j++){
        if (arr[j]<smallest){
            sec_smallest=smallest
            smallest=arr[j];
            
        }
        
    }
    printf("The secong largest element among the list is %d",sec_smallest);
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
    smallest(arr,size);
    return 0;
}
