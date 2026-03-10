// WAP to make simple calculator based on user choice
#include <stdio.h>
main()
{
    int a, b, ch;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("1-> Addition\n");
    printf("2-> Subtraction\n");
    printf("3-> Multiplication\n");
    printf("4-> Division\n");
    printf("5-> Modulo\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Addition=%d\n",a+b);
        break;
        case 2:
        printf("Subtraction=%d\n",a-b);
        break;
        case 3:
        printf("Multiplication=%d\n",a*b);
        break;
        case 4:
        printf("division=%d\n",a/b);
        break;
        case 5:
        printf("Modulo=%d\n",a%b);
        break;
        default:
        printf("Invalid Choice\n");
        break;
    }
}