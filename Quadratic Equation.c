#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discr;
    printf("Enter coefficients: ");
    scanf("%f %f %f", &a, &b, &c);
    discr = b * b - 4 * a * c;
    float root1, root2;
    if (discr > 0) {
        root1 = (-b + sqrt(discr)) / (2 * a);
        root2 = (-b - sqrt(discr)) / (2 * a);
        printf("Roots: %.2f and %.2f\n", root1, root2);
    } 
    else {
        printf("Does not have Roots.\n");
    }
    return 0;
}