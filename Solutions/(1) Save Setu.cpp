/*
UVA 12403 Save Setu
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl, std::string;
using ll = long long;

int main(void)
{
  // test case 	
  int testCase;
  cin >> testCase;

  ll account = 0, deposit; // the account balance, stores deposits
  string command; // get commands
  
  while (testCase--)
  {
    cin >> command; 

	/* update account */
    if (command == "donate")
    {
      cin >> deposit;
      account += deposit;
    }
	/* Show balance */
    else cout << account << endl;

  }

  return 0;
}