/*
UVA 10783 Odd Sum
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

int main(void)
{
  int testCase;
  cin >> testCase;

  int s, e; // start/end of range

  for (int i = 1; i <= testCase; i++)
  {
    int sum = 0; // odd sum
    cin >> s >> e; 

	/* iterate through range, if num is odd, add to sum */
    for (int j = s; j <= e; j++)
    {
      if (j%2 == 1) sum += j;
    }
	// formatted output
    cout << "Case " << i << ": " << sum << endl;
  }
  return 0;
}