/*
UVA 299 Train Swapping
Ben Sutherland
*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <iomanip>
using std::cout, std::cin, std::endl;

/* swap two integers */
void swap(int *X, int *Y)
{
  int temp = *X;
  *X = *Y;
  *Y = temp;
  return;
}
int main(void)
{
  int count; // count swaps required
  int testCase;
  cin >> testCase;
  int length; // number of trains
  while (testCase--)
  {
    count = 0;
    cin >> length;
    int train[length];
	
	/* get trains, store in an array */
    for (int i = 0; i < length; i++)
    {
      cin >> train[i];
    }
	
	/* perform selection sort on trains, count every swap required */
    for (int i = 0; i < length - 1; i++)
    {
      for (int j = 0; j < length - 1 - i; j++)
      {
        if (train[j] > train[j + 1])
        {
          swap(&train[j], &train[j + 1]);
          count++;
        }  
      }
    }
    cout << "Optimal train swapping takes " << count << " swaps." << endl; // formatted output 
  }
}