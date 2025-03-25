#include<stdio.h>
int fib(int n){
	if (n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
		}
		
int main(){
	int limit;
	printf("Enter the limit of fibonacci series:");
	scanf("%d",&limit);
	for (int i=0;i<limit;i++){
		printf("%d\t",fib(i));
		}
	return 0;
}
