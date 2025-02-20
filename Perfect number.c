#include <stdio.h>
int main()
{
    int sum,limit;
    printf("Enter the number: ");
    scanf("%d", &limit);
    sum=0;
    for(int i=1;i<limit;i++)
    {
           if (limit%i==0)
           {
               sum=sum+i;
           }
    }
    if (sum==limit)
    {
        printf("%d is a prefect number.",limit);
    }
    else
    {
        printf("%d is not a prefect number.",limit);
    }
    return 0;
}