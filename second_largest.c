#include<stdio.h>
void largest(int arr[],int size){
    int largest=arr[0],sec_largest;
    
    for (int j=1;j<size;j++){
        if (arr[j]>largest){
            sec_largest=largest;
            largest=arr[j];
            
        }
        
    }
    printf("The secong largest element among the list is %d",sec_largest);
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
    largest(arr,size);
    return 0;
}
