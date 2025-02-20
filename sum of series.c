#include <stdio.h>
int main()
{
    int limit;
    float value,sum;
    printf("Input the number of terms:");
    scanf("%d", &limit);
    sum=0;
    for(int i=1;i<=limit;i++)
    {
        value=(float)1/i;
        sum=(float)sum+value;
    }
    printf("Sum of Series upto %d terms:%f",limit,sum);
    return 0;
}