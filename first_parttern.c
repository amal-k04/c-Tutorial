#include <stdio.h>
int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", (i + j) % 2);
        }
        
        printf("\n");
    }

    return 0;
}