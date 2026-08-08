#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum = %d\n", sum);

    return 0;
}