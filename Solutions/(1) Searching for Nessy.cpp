/*
UVA 11044 Searching for Nessy
Ben Sutherland
*/
#include <iostream>
#include <algorithm>
using std::cin, std::cout, std::endl, std::sort;

int main(void)
{
  /* Get number of test cases */
  int testCase; 
  cin >> testCase;

  int rows, columns; // rows and columns for the grid

  while (testCase--)
  {
    cin >> rows >> columns; // input
	/*
	* Find how many sensors would fit veritcally and horizontally
	* Multiply the values to expand the horizontal and vertical sensors to a grid
	*/
    cout << (rows/3) * (columns/3) << endl;
  }
  
  return 0;
}