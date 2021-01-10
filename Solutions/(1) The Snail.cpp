/*
UVA 573 The Snail
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

#define PI acos(-1)
int main(void)
{
  double h, u, d, f, height; // height of pit, distance climbed, distance fell, fatique rate, current height of snail
  bool success; // if snail climbs out
  int day; // keeps track of days passed

  while (cin >> h >> u >> d >> f && h)
  {

    success = false;
    f *= u/100; // convert the fatique rate to a constant decrease, ie. 3 and 10%, -0.3 each day

	/* iterate for days, and height climbed */
    for (height = u, day = 1;; day++, height += u)
    {
      u -= f; // decrease climbing each day
      if (u < 0) u = 0; // snail cannot climb less than 0 a day
	  
	  // snail climbs out of pit if the height is higher than the pit
      if (height > h) 
      {
        success = true;
        break;
      }
	  
      height -= d; // decrease current height by the distance the snail falls everynight
      if (height < 0) break; // if the snail is at a negative height, then it fails
    }

    cout << ((success)? "success" : "failure") << " on day " << day << endl; // formatted output
  }
  return 0;
}