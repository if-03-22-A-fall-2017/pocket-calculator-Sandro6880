#include <stdio.h>
double result = 0;
int options()
{
 printf("Add(1) \n");
 printf("Subtract(2)\n");
 printf("Multiply(3)\n");
 printf("Divide(4)\n");
 printf("Stop programm(-1)\n");
}
int get_input()
{
  int choice;
  do {
    options();
    scanf("%d",&choice);
  } while(choice_is_valid(choice)== 0);
  return choice;
}
int choice_is_valid(int choice)
{
  int valid_number = 0;
  if(choice == 1||choice == 2||choice == 3||choice == 4||choice == -1)
  {
  valid_number = 1;
  }
  return valid_number;
}
double add()
{
  double numbers[2];
  printf("Put the first number in\n");
  scanf("%f", &numbers[0]);
  printf("%.2f ",&numbers[0] );
  printf("Put the second number in\n");
  scanf("%f", &numbers[1]);
  double add_result = numbers[0] + numbers[1];

  return add_result;
}
double subtract()
{
  double number1;
  double number2;
  printf("Put the first number in\n");
  scanf("%d", &number1);
  printf("Put the second number in\n");
  scanf("%d", &number2);
  double subtract_result = number1 - number2;
  return subtract_result;
}
double multiply()
{
  double number1;
  double number2;
  printf("Put the first number in\n");
  scanf("%d", &number1);
  printf("Put the second number in\n");
  scanf("%d", &number2);
  double multiply_result = number1 * number2;
  return multiply_result;
}
double divide()
{
  double number1;
  double number2;
  printf("Put the first number in\n");
  scanf("%d", &number1);
  printf("%d\n",&number1 );
  printf("Put the second number in\n");
  scanf("%d", &number2);
  double divide_result = number1 / number2;
  return divide_result;
}
double optionsChoose(int number)
{
  switch (number)
  {
    double result;
    case 1:result = add();
    break;
    case 2:result = subtract();
    break;
    case 3:result = multiply();
    break;
    case 4:result = divide();
    break;
    case -1: printf("Quit by the User\n");
    break;
    default:
    break;
  }
  return result;
}

int main(int argc, char const *argv[])
{
  int numberchosen;
  numberchosen = get_input();
  double result;
  result = optionsChoose(numberchosen);
  printf("\nResult: %.2lf\n",result);
  return 0;
}
