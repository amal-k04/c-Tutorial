#include<stdio.h>
#define pi 3.14159
#define area_cylinder(x,h) 2*pi*(x)*(x+h)

int main(){
	float x,h;
	printf("Enter the Radius of the Cylinder:");
	scanf("%f",&x);
	printf("Enter the Height of the Cylinder:");
	scanf("%f",&h);
	printf("The Area of the Cylinder is %.2f",area_cylinder(x,h));
	return 0;
	}
