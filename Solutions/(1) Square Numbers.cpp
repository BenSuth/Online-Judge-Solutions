/*
UVA 11461 Square Numbers
Ben Sutherland
*/
#include <iostream>
#include <cmath>
using std::cin, std::cout, std::endl;

int main(void)
{
  int a, b; // range
  int result; // number of square numbers in range
  while (cin >> a >> b)
  {
    result = 0;
    if (a == 0 && b == 0) break; // end of input

    for (int i = a; i <= b; i++)
    {
	  /* 
	   * increase result if the square root of the number is an integer 
	   * a number is an integer if num%1 == 0 (fmod since doubles)
	   */	
      if (fmod(sqrt(i),1) == 0)
        result++;
    }
    cout << result << endl;
  }
  return 0;
}