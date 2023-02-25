#include <stdio.h>
void main()

{
    int a,b;
    char ch;

    printf("\n\nOPTIONS\n\n");
    printf("ADDITION(+)\n");
    printf("SUBTRACTION(-)\n");
    printf("MULTIPLICATION(*)\n");
    printf("DIVISION(/)\n");
    printf("\nEnter the operation: ");
    scanf("%c",&ch);

     if(ch=='+'){
        printf("Enter the first number: ");
        scanf("%d",&a);
        printf("Enter the second number: ");
        scanf("%d",&b);
        printf("The sum of the two numbers are: %d",a+b);
    }else if(ch=='-'){
        printf("Enter the first number: ");
        scanf("%d",&a);
        printf("Enter the second number: ");
        scanf("%d",&b);
        printf("The difference between the two numbers are: %d",a-b);
    }else if(ch=='*'){
        printf("Enter the first number: ");
        scanf("%d",&a);
        printf("Enter the second number: ");
        scanf("%d",&b);
        printf("The product of the two numbers are: %d",a*b);
    }else if(ch=='/'){
        printf("Enter the first number: ");
        scanf("%d",&a);
        printf("Enter the second number: ");
        scanf("%d",&b);
        printf("The quotient is: %d",a/b);
    }else{
        printf("Invalid option\n");
    }

}


