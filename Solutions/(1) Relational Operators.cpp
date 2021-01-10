/*
UVA 11172 Relational Operators
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

int main(void)
{
  int testCase;
  cin >> testCase;

  int num1, num2; // numbers to compare
  while (testCase--)
  {
    cin >> num1 >> num2;
	
	/* output corresponding operator based on number comparison */
    if (num1 == num2) cout << "=" << endl;
    else if (num1 > num2) cout << ">" << endl;
    else if (num1 < num2) cout << "<" << endl;
  }
  return 0;
}