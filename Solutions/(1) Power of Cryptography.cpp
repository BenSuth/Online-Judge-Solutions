/*
UVA 113 Power of Cryptography
Ben Sutherland
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using std::cin, std::cout, std::endl, std::setprecision, std::fixed;
int main(void)
{
  double n, p;

  while (cin >> n >> p)
  {
	/*
     * Output the n-th root of p
	 * Can be calculated with logarithms 
	 * Equivalent to showing e^(lnp/n)
	 * Formatted output
	 */
    cout << setprecision(0) << fixed << exp((log(p))/n) << endl;
  }
  
  return 0;
}