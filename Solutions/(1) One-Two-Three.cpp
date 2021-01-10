/*
UVA 12289 One-Two-Three
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl, std::string;

int main(void)
{ 
  // get test cases
  int testCase;
  cin >> testCase;

  string one = "one"; // compare each input string to "one"
  int letterCount; // count matching letters with "one"
  
  while (testCase--)
  {
    letterCount = 0;
    string input;
    cin >> input;
	
	/* Check for matching occurences in character*/
    for (int i = 0; i < 3; i++) if (input[i] == one[i]) letterCount++;

	/* 
	 * if length is 5, it must be 3
	 * if there are two matching characters it must be 1
	 * else it must be 2
	 */
    cout << ((input.length() == 5)? 3 : ((letterCount >= 2)? 1:2 )) << endl;
  }
  return 0;
}