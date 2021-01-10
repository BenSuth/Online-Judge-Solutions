/*
UVA 579 Clock Hands
Ben Sutherland
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using std::cin, std::cout, std::endl, std::setprecision, std::fixed, std::abs;

int main(void)
{
  double h, m; // hours and minutes
  char temp; // get : from input
  double angle; // angle between hour and minute hand

  // break when h and m = 0
  while (cin >> h >> temp >> m && !(m == 0 && h == 0))
  {
	/*
     * Each hour on a clock is 30 degrees away from each other, so 1 is 30 degrees, 2 is 60 degrees (away from 12), etc.
	 * Each minute on a clock is 6 degrees on a clock, 360/60(minutes) = 6 degrees/minute
	 * so the angle = 30*h - m*6
	 * Hour hand doesn't always land exactly on an hour, so convert minutes to hours and add that to the angle for hours
	 * so the angle = 30*h + (m/60)*30 - m*6
	 * simplified to : 30*h - m*(-5.5)
	 * get abs, because smallest angle is positive
	 */
    angle = abs(30*h + m*(-5.5));
	
	// formatted output, convert angles to be less than 180
    cout << setprecision(3) << fixed << ((angle > 180)? 360 - angle : angle) << endl;
  }

  return 0;
}