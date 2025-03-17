# include<stdio.h>
int palindrome(int);
int main(){
    int num,reverse;
    printf("Enter the number:");
    scanf("%d",&num);
    reverse=palindrome(num);
    if (reverse==num)
    {
        printf("The given number is a palindrome, %d = %d",num,reverse);
    }
    else
    {
        printf("The given number is not a palindrome,%d != %d",num,reverse);
    }
    return 0;
}

int palindrome(int num){
    int rem,rev=0;
    while (num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        
    }
    return rev;
}
