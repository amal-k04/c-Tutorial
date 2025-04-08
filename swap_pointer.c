#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	}

int main(){
	int num1,num2,*n1,*n2;
	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("Enter the second number :");
	scanf("%d",&num2);
	n1=&num1;
	n2=&num2;
	printf("Before swapping the two numbers:\n First number: %d\t Second number: %d\n",num1,num2);
	swap(&num1,&num2);
	printf("After swapping the two numbers:\n First number: %d\t Second number: %d\n",num1,num2);
	return 0;
}
