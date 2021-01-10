/*
UVA 575 Skew Binary
Ben Sutherland
*/
#include <iostream>
#include <cmath>
using std::cin, std::cout, std::endl, std::string, std::pow;

int main(void)
{
  string input; // read input number
  int num; // get input as integer

  while (cin >> input && input != "0")
  {
    int sum = 0; // the number in decimal
    int i = 0; // keep track of number order

	/*
	 * k is position of the number in the string
	 * i is the number column (ones, tens, hundreds, etc.)
	 * do the conversion from skew to decimal
	 * sum stores the decimal output
	 */
    for (int k = input.length() - 1; k >= 0; k--)
    {
      num = input[k] - '0';
      sum += num * ((pow(2, i + 1 )) - 1);
      i++;
    }

    cout << sum << endl; // formatted output
  }  

  return 0;
}