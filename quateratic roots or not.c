#include <stdio.h>

int main() {
    float a,b,c,discr;
    printf("enter the coeffficent of X^2:");
    scanf("%d",&a);
    printf("enter the coefficent of X:");
    scanf("%d",&b);
    printf("enter the constant:");
    scanf("%d",&c);
    discr=b*b-4*a*c;
    if(discr>0)
    {
        printf("there are two real and distinct roots.");
        root1 = (-b + sqrt(discr)) / (2 * a);
        root2 = (-b - sqrt(discr)) / (2 * a);
        printf("Roots: %.2f and %.2f\n", root1, root2);
    }
    else if(discr==0)
    {
        printf("there is one real root.");
    }
    else
    {
        printf("the roots are complex");
    }
    return 0;
}
