/* 
UVA 465 Overflow
Ben Sutherland
*/
#include <stdio.h>
#include <limits.h>

int main(void){
  double num1, num2; // get the two numbers
  char oprtr; // store operator
  char equation[1000]; // store equation
  while(fgets(equation, 1000, stdin) != NULL)
  {
    sscanf(equation, "%lf %c %lf", &num1, &oprtr, &num2); // read two doubles and an operator from the equation
    switch (oprtr)
    {
	  /* check if num1, num2, num1 + num2 is bigger than the INT_MAX */
      case '+':
        if (num1 > INT_MAX) puts("first number too big");
        if (num2 > INT_MAX) puts("second number too big");
        if (num1 + num2 > INT_MAX) puts("result too big"); 
        break;
		
	  /* check if num1, num2, num1 + num2 is bigger than the INT_MAX */
      case '*':
        if (num1 > INT_MAX) puts("first number too big");
        if (num2 > INT_MAX) puts("second number too big");
        if (num1 * num2 > INT_MAX) puts("result too big"); 
        break;

      default:
        break;
    }
  }
  return(0);
}