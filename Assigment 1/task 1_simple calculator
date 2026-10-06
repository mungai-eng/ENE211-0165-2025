#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //basic calculator
    // functions :Addition,Subtraction,Multiplication,Division,modulus
    //characters  used number1 & number2
    double number1;
    double number2;
    char operatr;
    double result;

    printf("Enter operator (+,-,*,/,%%):");
    scanf("%c",&operatr);

    printf("Enter first number\n");
    scanf("%lf",&number1);

    printf("Enter second number\n");
    scanf("%lf",&number2);


    switch (operatr)
    {
        case '-':
            result = number1 - number2;
        break;

        case '+':
            result = number1 + number2;
        break;

        case '/':
            result = number1 / number2;
        break;

        case '*':
            result = number1 * number2;
        break;

         case '%':
            result = fmod(number1, number2);
        break;
    }
    printf("Result: %lf", result);

    return 0;
}
