/*
UVA 834 Continued Fractions
Ben Sutherland
*/
#include <iostream>
#include <vector>
using std::cin, std::cout, std::endl;

/*
 * Recursively find the continued fractions
 */
void continuedFraction(long long num, long long denum, std::vector<long long>& list)
{
  if (denum == 0) return; // base case, can't divide by 0
  list.push_back(num/denum); // add fraction to list
  
  /*
   * The denominator becomes the numerator for the next step
   * The new denominator is now the remainder of the numerator/demoninator
   * This comes from the definition given in the question
   */
  continuedFraction(denum, num%denum, list);
}

int main()
{
  long long num, denum; // number and denominator
  std::vector<long long> list; // list of continued fraction

  while (cin >> num >> denum)
  {
    continuedFraction(num, denum, list);

	/* Formatted output */
    for (int i = 0; i < list.size(); i++)
    {
      if (i == 0) cout << "[" << list[i];
      else if (i == 1) cout << ";" << list[i];
      else cout << "," << list[i];
    }
    cout << "]" << endl;
    list.clear(); // clear for next case
  }

}