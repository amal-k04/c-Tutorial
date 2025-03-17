#include<stdio.h>
int main(){
    
    int num1,num2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    int rev1=0,rem1;
  // reversing the first number
    while (num1!=0){
        rem1=num1%10;
        rev1=rev1*10+rem1;
        num1/10;
    }
    // reversing the second number
    int rev2=0,rem2=0;
    while (num2!=0){
        rem2=num2%10;
        rev2=rev2*10+rem2;
        num2/10;
    }
    
    int rev=rev1+rev2;
    // reversing the sum of two reversed numbers.
    int num=0,rem=0;
    while (rev!=0){
        rem=rev%10;
        num=num*10+rem;
        rev/10;
    }
  //displaing the reversed sum
    printf("the sum of two numbers after reversing and the result also being reversed is %d",num);
    
    return 0;
}
