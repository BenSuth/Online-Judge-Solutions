/*
UVA 11054 Wine Trading in Gergovia
Ben Sutherland
*/
#include <iostream>
using std::cout, std::cin, std::endl, std::pair;
using ll = long long;
int main(void)
{
  int val[100000]; // inhabitants
  int num; // number of inhabitants
  ll absDif, sum;
  while (cin >> num && num)
  {
	/* get inhabitants */
    for (int i = 0; i < num; i++)
    {
      cin >> val[i];
    }

    absDif = 0;
    sum = 0;
    
	/*
	 * To calculate work units required
	 * Sum the distance to each house
	 * Track the absolute difference between the sums
	 * That is your output
	 */
    for (int i = 0; i < num - 1; i ++)
    {
      sum += val[i];
      if (sum >= 0) absDif += sum;
      else absDif -= sum;
    }
    cout << absDif << endl; // formatted output
  }
  return 0;
}