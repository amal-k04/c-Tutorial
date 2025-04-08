# include<stdio.h>
int a=10;
void num_auto(){
	int auto a=1;
	int static b=3;
	a++;
	b++; 
	printf("\nThe new value are %d and %d",a,b);
	}
	
	
void num_register(){
	int register num=6;
	printf("\nThe value in register %d",num); 
	}
	
int main(){
	num_auto();
	num_auto();
	num_register();
	int new=a;
	printf("\nThe external value is %d",new);
	
	return 0;
	}
