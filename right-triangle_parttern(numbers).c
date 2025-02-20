#include <stdio.h>

int main() {
    int limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for (int i=1;i<=limit;i++)
    {
        for(int k=1;k<=i;k++)
        {
         printf("%d",k);
        }printf("\n");
    }

    return 0;
}