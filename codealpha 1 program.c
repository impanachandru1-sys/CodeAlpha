#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b; char op;
    printf("Enter number1 operator number2:");
    scanf("%lf %c %lf", &a, &op, &b);
    switch(op){
        case '+': printf("Result = %.2lf\n", a + b); break;
        case '-': printf("Result= %.2lf\n", a - b); break;
        case '*': printf("Result= %.2lf\n", a * b); break;
        case '/': if(b != 0) printf("Result = %.2lf\n", a / b);
                    else printf("Error: Division by zero\n"); break;
                    default: printf("Error: Invalid operator\n");
    }
    return 0;
    
                    
    }