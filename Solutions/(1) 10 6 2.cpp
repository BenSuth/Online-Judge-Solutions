/*
UVA 12578 10:6:2
Ben Sutherland
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using std::cin, std::cout, std::endl, std::setprecision, std::fixed;
int main() 
{
  int L; // length of rectangle
  double r, w; // radius of circle, width of rectangle
  int testCase;
  cin >> testCase;
  
  while (testCase--)
  {
    cin >> L;
	
	/* r and w are ratios of L */
    r = double(L) * double(1)/double(5);
    w = double(L) * double(6)/double(10);
	
	/* Calculate areas */
    double circle = r*r*acos(-1);
    double rectangle = double(L)*double(w) - circle;
	
	/* formatted output */
    cout << setprecision(2) << fixed << circle << " " << rectangle << endl;

  }
  return 0;
}