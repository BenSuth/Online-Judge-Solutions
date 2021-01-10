/*
UVA 458 The Decoder
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl, std::string;

int main(void)
{
  string s; // store each line as a string

  while (cin >> s)
  {
    string answer = ""; // decode for each line
    for (int i = 0; i < s.length(); i++) answer += s[i] - 7; // shift each character 7 chars to the left
    cout << answer << endl; // formatted output
  }

  return 0;
}