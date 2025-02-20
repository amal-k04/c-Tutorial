#include <stdio.h>

int main() {
    int limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for (int i=0;i<limit;i++)
    {
        for(int k=0;k<=i;k++)
        {
         printf("*");
        }printf("\n");
    }

    return 0;
}