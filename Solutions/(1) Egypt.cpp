/*
UVA 11854 Egypt
Ben Sutherland
*/
#include <iostream>
#include <algorithm>
using std::cin, std::cout, std::endl, std::sort;

int main(void)
{
  int sides[3]; // represents three sides of a triangle

  // get input while sides aren't zero
  while ((cin >> sides[0] >> sides[1] >> sides[2]) && sides[0])
  {
    sort(sides, sides + 3); // sort the sides to get form a^2 + b^2 = c^2
	// if a^2 + b^2 = c^2 print right, else print false
    cout << (((sides[0]*sides[0] + sides[1]*sides[1]) == sides[2]*sides[2])? "right" : "wrong") << endl;
  }
  return 0;
}