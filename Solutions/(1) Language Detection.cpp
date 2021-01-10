/*
UVA 12250 Language Detection
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl, std::string;

int main(void)
{
  int i = 1; // count cases
  string language; // get input
  while (cin >> language && language != "#")
  {
    cout << "Case " << i++ << ": "; // formatted output

	/* if the input matches a language, out put the language, else print unknown */
    if (language == "HELLO") cout << "ENGLISH";
    else if (language == "HOLA") cout << "SPANISH";
    else if (language == "HALLO") cout << "GERMAN";
    else if (language == "BONJOUR") cout << "FRENCH";
    else if (language == "CIAO") cout << "ITALIAN";
    else if (language == "ZDRAVSTVUJTE") cout << "RUSSIAN";
    else cout << "UNKNOWN";
    cout << endl; // move to next case
  }
  return 0;
}