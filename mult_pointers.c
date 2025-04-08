#include<stdio.h>
int main(){

int a,*b,**c;
printf("Enter the number:");
scanf("%d",&a);
b=&a;
c=&b;
printf("The Value of number(as a) is %d\n",a);
printf("The Value of number(as *b) is %d\n",*b);
printf("The Value of number(as **c) is %d\n",**c);
return 0;
}
