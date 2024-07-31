#include<stdio.h>

int main(){
  char operator;
  printf("Choosean operator ['+','-','*','/',]: ");
  scanf("%c", &operator);

  double num1, num2;
  printf("\nenter your first number: ");
  scanf("%lf", &num1);
  printf("\n enter your second number: ");
  scanf("%lf", &num2);

  double result;
  
  switch (operator)
  {
  case '+':
    result = num1 + num2;
    break;

    case '-':
      result = num1 - num2;
      break;

      case '*':
      result=num1*num2;
      break;

      case '/':
        result = num1 / num2;
        break;

        default:
          printf("invalid Operator");
  }
  printf("%.2lf", result);
  return 0;
}