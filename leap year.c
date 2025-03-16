#include <stdio.h>

int main() {
    
    int year;
    printf("Enteer the  year:");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("%d i a LEAP YEAR.",year);
    }
    else
    {
        printf("%d is not a LEAP YEAR.",year);
    }

    return 0;
}
