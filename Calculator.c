#include <stdio.h>
#include <math.h>
int main()
{
    float num1,num2;
    char op;
    printf("\t\t\tCALCULATOR\n\n");
    printf("Please enter two values and an operator.\n");
    scanf("%c",&op);
    scanf("%f",&num1);
    scanf("%f",&num2);

    switch(op){
        case '+': printf("\t\t%.2f+%.2f=%.2f",num1,num2,num1+num2);break;
        case '-': printf("\t\t%.2f-%.2f=%.2f",num1,num2,num1-num2);break;
        case '*': printf("\t\t%.2f*%.2f=%.2f",num1,num2,num1*num2);break;
        case '/': printf("\t\t%.2f/%.2f=%.2f",num1,num2,num1/num2);break;
        case '^': printf("\t\t%.2f^%.2f=%.2f",num1,num2,pow(num1,num2));break;
        case 's': printf("\t\tSquare root of %.2f is %.2f",num2,sqrt(num2));break;
        default : printf("!!!Please enter a valid operator!!!\nValid operators are (+,-,*,/,^,s)");
    }
    printf("\n-----------------------------------------");
    return 0;
}
