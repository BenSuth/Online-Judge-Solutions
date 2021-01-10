/*
UVA 11875 Brick Game
Ben Sutherland
*/
#include <iostream>
#include <algorithm>
using std::cin, std::cout, std::endl, std::sort;
int main(void)
{
  /* Get test cases */
  int testCase;
  cin >> testCase;

  int size // size of team 

  for (int c = 1; c <= testCase; c++)
  {
    cin >> size; // get size
    
    int age[size]; // create array of teams ages

    for (int i = 0; i < size; i++) cin >> age[i]; // populate array

    sort(age, age + size); // sort the array
	
	// the middle of the array is the average age
    cout << "Case " << c << ": " << age[size/2] << endl; // formatted output 
  }

  return 0;
}