#include <stdio.h>
struct student{
	int roll;
	char name;
	float age;
}s1;

union employee{
	int emp_roll;
	char emp_name;
	float salary;
	}e1;
	
int main(){
	int size_struct,size_union;
	size_struct=sizeof(s1);
	size_union=sizeof(e1);
	printf("The Size of structure %d Bytes\n",size_struct);
	printf("The Size of union %d Bytes\n",size_union);
	return 0;
}
