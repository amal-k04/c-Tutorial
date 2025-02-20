#include <stdio.h>
int main() {
    int i, j,prod;
    for (i = 1; i <= 5; i++) {
        printf("Multiplication Table for %d:\n", i);
        for (j = 1; j <= 10; j++) {
            prod=i*j;
            printf("%d x %d = %d\n", i, j, prod);
        }
    }
    return 0;
}