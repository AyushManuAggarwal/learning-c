#include <stdio.h>
#include <co.h>

int main()
{
    int a;
    int b;
    int in;
    int out;

    printf("============================================\n");
    printf("Enter a choice for operation to be performed\n");
    printf("============================================\n");
    printf("     1.     Additons\n");
    printf("     2.     Subtraction\n");
    printf("     3.     Multiplication\n");
    printf("     4.     Divison\n");
    printf("============================================\n");
    printf("choice: ");
    scanf("%d",&in);

    if(in == 1){
        printf("Enter number 1: ");
        scanf("%d", &a);
        printf("Enter number 2: ");
        scanf("%d", &b);
        out = (a + b);
        printf("the sum is %d", out);
    }
    else if(in == 2){
        printf("Enter number 1: ");
        scanf("%d", &a);
        printf("Enter number 2: ");
        scanf("%d", &b);
        out = (a - b);
        printf("the difference is %d", out);
    }
    else if(in == 3){
        printf("Enter number 1: ");
        scanf("%d", &a);
        printf("Enter number 2: ");
        scanf("%d", &b);
        out = (a * b);
        printf("the product is %d", out);
    }
    else if(in == 4){
        printf("Enter number 1: ");
        scanf("%d", &a);
        printf("Enter number 2: ");
        scanf("%d", &b);
        out = (a / b);
        printf("the quotient  is %d", out);
    }
    else{
        printf("wrong input");
    }



    return 0;
}
