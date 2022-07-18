#include <stdio.h>
#include <math.h>

int main(void)
{

    int x;
    int y;
    int answer;
    char operator;
    
    printf("Please enter an operator: (+, -, /, *)");
    scanf("%c", &operator);
    printf("Please enter operand one: ");
    scanf("%d", &x);
    printf("Please enter operand two: ");
    scanf("%d", &y);
  
 
    switch(operator)
    {
    
    case '+':
    answer = x + y;
    break;

    case '-':
    answer = x - y;
    break;

    case '/':
    answer = x / y;
    break;

    case '*':
    answer = x * y;
    break;

    default:
    printf("Please enter valid operator");
    }
    printf("Answer: %d", answer);
    
    return 0;
}