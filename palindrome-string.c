# include<stdio.h>
#include<string.h>
void palindrome(char *);
int main(){
    char term[50];
    printf("Enter the STRING:");
    scanf("%s",term);
    palindrome(term);
    return 0;
}

void palindrome(char *term){
    char rev[50];
    int len=strlen(term);
    for (int i=0,j=len-1;i<len,j!=-1;i++,j--){
        rev[j]=term[i];
        
    }
    if(strcmp(rev,term)==0){
    printf("The given string is palindrome.");}
    else{
        printf("The given string is not a palindrome.");
    }
}
