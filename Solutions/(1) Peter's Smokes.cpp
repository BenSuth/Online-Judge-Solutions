/*
UVA 10346 Peter's Smokes
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;
/*
 * The number of smoked is x, the number of cigarettes
 * We then need to add x/y, for every y cigarettes, a new cigarette is created
 * subtract one from, x and y because it is integer division
 */
#define SMOKED(x,y) x + (x-1)/(y-1)
int main(void)
{
  int n, k; // cigarettes, and butts required to make another cigarette

  while (cin >> n >> k)
  {
    cout << SMOKED(n, k) << endl; // formatted output
  }

  return 0;
}