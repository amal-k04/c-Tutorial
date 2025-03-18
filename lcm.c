#include<stdio.h>
int main()
{
printf("Enter the number:");
int num1,num2,num3,largest;
scanf("%d",&num1);
printf("Enter the number:");
scanf("%d",&num2);
printf("Enter the number:");
scanf("%d",&num3);
if (num1>num2)
{
	if (num1>num3)
	{
		{largest=num1;}
	else
		{largest=num3;}
}
else
{
	if(num2>num3)
	{largest=num2;}
	else
	{largest=num3;}
		
		

}
int i=2;
while(i<largest)
{
	if (num1%i==0)
	{
		
