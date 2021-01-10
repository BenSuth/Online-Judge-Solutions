/*
UVA 12577 Haji-e-Akbar
Ben Sutherland
*/
#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main() 
{
  string input; // Haji, Umrah, or *
  int testCase = 0; // keep track of cases for output
  while(cin >> input) 
  {
    if(input == "*") break; // stop at *
	
	/* formatted output */
    cout << "Case " << ++testCase << ": ";
    (input == "Hajj")?
      cout << "Hajj-e-Akbar" << endl : // if Haji
      cout << "Hajj-e-Asghar" << endl; // if Umrah
    }
    return 0;
}