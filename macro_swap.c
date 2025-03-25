#include<stdio.h>
#define swap(a,b) temp=a;a=b;b=temp;

int main(){
	int a,b,temp;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Before swapping the numbers num1=%d and num2=%d\n",a,b);
	swap(a,b);
	printf("after swapping the numbers num1=%d and num2=%d\n",a,b);
	return 0;
	}
