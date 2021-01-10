/*
UVA 10300 Ecological Premium
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

int main()
{
  int testCase = 0;
  int numberFarmers = 0; // the number of farmers
  int land, animals, quality = 0; // land size, number of animals, environment-friendliness
  int sum;

  cin >> testCase;

  while (testCase--)
  {
    cin >> numberFarmers;
    sum = 0;
	/* In the equation given, the animals cancel out when you divide/multiply*/
    for (int i = 0; i < numberFarmers; i++)
    {
      cin >> land >> animals >> quality;
      sum += land * quality; // just get the sum of each farmers land * quality
    }
    cout << sum << endl; // formatted output
  }
  return 0;
}