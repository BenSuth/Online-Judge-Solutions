/* 
UVA 10137 The Trip
Ben Sutherland
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cin, std::cout, std::endl;
int main(void)
{
  int numStudents;

  double average; // average money spemt
  double diff; // difference in money spent
  double round; // round numbers to integers

  while (cin >> numStudents && numStudents != 0)
  {  
    double totalMoney = 0;
    double totDiff, negDiff = 0, posDiff = 0;
    double money[numStudents];
	
	/* store spending of each student and get sum of money spent */
    for (int i = 0; i < numStudents; i ++)
    {
      cin >> money[i];
      totalMoney += money[i];
    }
	
    average = totalMoney/numStudents; // average money spent
	
	/* get the absolute diffence in money spent */
    for (int j = 0; j < numStudents; j++)
    {
      diff = money[j] - average;
	  
	  /* rounding */
      diff *= 100;
      round = fmod(diff,1);
      diff = diff/100 - round/100;

	  /* track postive and negative difference in money */
      if (diff > 0) posDiff += diff;
      else if (diff < 0) negDiff += diff;
    }
	
	/* 
	 * find whether the postive or negative difference is bigger
	 * the total difference is the absolute value of the larger quantity
	 */
    negDiff *= -1;
    if (negDiff > posDiff) totDiff = negDiff;
    else totDiff = posDiff;

	/* Formatted Output */
    cout << std::setprecision(2) << std::fixed;
    cout << "$" << totDiff << endl;
  }

  return 0;
}

