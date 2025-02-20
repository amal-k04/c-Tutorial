#include <stdio.h>
int main() {
    char c,flag;
    printf("Enter the character:");
    scanf(" %c",&c);
    char a[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<10;i++)
    {
        if(c==a[i])
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        printf("the character is a vowel");
    }
    else
    {
        printf("The character is a Consonant");
    }
    return 0;
}