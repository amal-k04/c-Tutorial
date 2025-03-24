
#include <stdio.h>
#include<string.h>
void is_palindrome(char arr[],int size){
    char rev[size];
    int i,j;
    for(i=0,j=size-1;i<size;i++,j--){
        rev[j]=arr[i];
    }
    if(strcmp(rev,arr)==0){
        printf("THE ENTERED STRING IS PALINDROME");
    }
    else{
        printf("THE ENTERED STRING IS NOT PALINDROME");
    }
    
}
int main() {

    char arr[20];
    printf("Enter the string:");
    scanf(" %s",&arr);
    int size=strlen(arr);
    is_palindrome(arr,size);

    return 0;
}
