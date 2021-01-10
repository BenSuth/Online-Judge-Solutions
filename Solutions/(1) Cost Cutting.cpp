/*
UVA 11727 Cost Cutting
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

int main(void)
{
  int testCase;
  cin >> testCase;

  int e1, e2, e3; // 3 employees

  for (int i = 1; i <= testCase; i++)
  {
    cin >> e1 >> e2 >> e3; 
	
	/*
	* use ? operator to compare numbers until we find the middle
	* formatted output
	*/
    cout << "Case " << i << ": " << 
    ((e1 > e2)? ((e3 > e1)? e1 : (e2 > e3)? e2 : e3) :
    ((e3 > e2)? e2 : (e1 > e3)? e1 : e3)) << endl;
  }
  return 0;
}