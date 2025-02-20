#include <stdio.h>
int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (int num = 2; num <= limit; num++) {
        int flag = 1;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag==1) {
            printf("%d ", num);
        }
    }
    return 0;
}