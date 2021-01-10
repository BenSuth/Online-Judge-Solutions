/*
UVA 100 The 3n + 1 problem
Ben Sutherland
*/
#include <stdio.h>

/* swap two integers */
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;

  return;
}

/* find the cycle length between two integers */
int cycleCount(int min, int max)
{
  int cycle = 1, temp;
  int i, num;

  if (min > max) swap(&min, &max); // sure min <= max

  /* Perform steps outlined in problem */
  for (i = min; i <= max; i++)
  {
    temp = 1;
    num = i;
    while (num != 1)
    {
      temp++; // increase cycle length

      if (num%2 == 0) num /= 2;
      else num = 3*num + 1;
    }

    if (temp >= cycle) cycle = temp; // set cycle = temp
  }
  return cycle; // return the cycle length
}

int main(void) {
  
  int cycleLength = 1;
  int num1, num2; // two integers i and j
  int maxLength; // max cycle count for an i and j


  while (scanf("%d %d", &num1, &num2)!=EOF){
    maxLength = cycleCount(num1, num2); // get max length
    printf("%d %d %d\n", num1, num2, maxLength); // formatted output
  }
  
  return(0);
}