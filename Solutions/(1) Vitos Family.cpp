/*
UVA 10041 Vito's Family
Ben Sutherland
*/
#include <iostream>
#include <algorithm>
#include <vector>
using std::cin, std::cout, std::endl, std::sort, std::vector;

int main(void)
{
  /* Get number of test cases */
  int testCase;
  cin >> testCase;

  int r, mid, distance, temp; // number of relatives, average ditance, distance required to travel, temporary variable

  while(testCase--)
  {
    cin >> r; // get number of relatives
    vector<int> location; // store location of each relative in array
    distance = 0; // start distance traveled at zero

	/* Populate Location */
    for (int i = 0; i < r; i++)
    {
       cin >> temp;
       location.push_back(temp);
    }   
	// sort to find the middle/average
    sort(location.begin(), location.end());
    mid = location[r/2];

	/* The minimum distance travelled is the distance from the middle to each point */
    for (int i = 0; i < r; i++) distance += abs(location[i] - mid);

    cout << distance << endl; // formatted output
  }
  return 0;
}