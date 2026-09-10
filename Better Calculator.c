#include <stdio.h>
#include <math.h>

int main() {

char operator;
double num1, num2, result;

printf("Enter an Operator (+, -, *, /, ^, s): ");
scanf(" %c", &operator);

if(operator == 's') { 

    printf("Enter a number: ");
    scanf("%lf", &num1);
    result = sqrt(num1);
    printf("Square Root of %.2lf = %2lf\n", num1, result);

} else if (operator == '^') {
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &num1, &num2);
    result = pow(num1, num2);
    printf("raised to the power of %.2lf = %.2lf\n", num1, result);

} else {
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        
        case '+': result = num1 + num2; break;
        
        case '-': result = num1 - num2; break;
        
        case '*': result = num1 * num2; break;
        
        case '/': if (num2 == 0) {  printf("You can't divide by zero.\n");
        
            return 1;} else { result = num1 / num2; } break;
       
        default: printf("Error invalid operator."); return 1;
    }

    printf("Result: %.2lf\n", result);
}

return 0;

}
