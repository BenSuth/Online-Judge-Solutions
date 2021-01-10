/*
UVA 10432 Polygon Inside A Circle
Ben Sutherland
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin, std::cout, std::endl, std::setprecision, std::fixed;
#define PI acos(-1) // define PI in rads

int main(void)
{
  double r; // radius of cirlce
  double n; // number of sides to the polygon

  while (cin >> r >> n)
  {
	/*
	* Calculate the area of a trianlge, 2 sides are radius, the other side is one side of the polygon
	* If we can calculate this area then we can multiply that by number of sides to get area
	* The angle between at the centre of the cirlce can be calculated by sin(2*PI/n)
	* Using this we can calculate the area of the trianlge
	* Formatted output with setprecision and fixed
	*/
    cout << setprecision(3) << fixed << n*r*r*sin(2*PI/n)/2 << endl;
  }
  return 0;
}