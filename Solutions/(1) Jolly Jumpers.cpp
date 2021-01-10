/*
UVA 10038 Jolly Jumpers
Ben Sutherland
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using std::cin, std::cout, std::endl, std::abs;

int main(void)
{
  int max = 0;
  int num; // size of sequence
  int sequence[3001]; // store the sequence
  int differences[3000]; // store the differences in the sequence
  int check = 1; // check == 0 if the sequence is jolly
  
  /* Get size of sequence */
  while (scanf("%d", &num) == 1)
   {
	/* get the sequence */   
    for (int i = 0; i < num; i++)
    {
      cin >> sequence[i];
    }
	
	/* a sequence of 1 is always jolly */
    if (num == 1) 
    {
      cout << "Jolly" << endl;
      continue;
    }
	
	/*
	 * get the absolute differences between the sequence, also find the max difference
     * store the differences in an array
	 */
	differences[0] = abs(sequence[0] - sequence[1]);
    max = differences[0];
    for (int i = 1; i < num - 1; i++)
    {
      differences[i] = abs(sequence[i] - sequence[i+1]);
      if (differences[i] > max) max = differences[i];
    }
	
	/* check if all numbers in [1, sequence_size - 1], are also in differences */
    for (int i = 1; i < num; i++)
    {
      check = 1;
	  
	  /* check for number in differences */
      for (int j = 0; j < num - 1; j++)
      {
        if (differences[j] == i)
        {
          check = 0;
          break;
        }
      }
      if (check) break; // if check isn't zero, a number isn't found, therefore sequence is not jolly
    }
  (!check)? cout << "Jolly" << endl : cout << "Not jolly" << endl; // formatted output 
  }
  return 0;
}