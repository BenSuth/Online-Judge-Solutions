/*
UVA 272 TEX Quotes
Ben Sutherland
*/
#include iostream
#include vector
using stdcin, stdcout, stdendl, stdstring;
int main(void)
{
  bool first = true; // keeps track of whether quote is opened or closed */
  string input; // get input
  while (stdgetline(stdcin, input))
  {
	/* iterate through string, replace quotes with '' or `` */  
    for (int i = 0; i  input.size(); i++)
    {
      char temp = input[i]; // store each char of string
	  
	  /* replace opening quote with `` */
      if (input[i] == '' && first)
      {
        cout << ``;
        first = false; // next quote will be closing
      }  
	  
	  /* replace closing quote with '' */
      else if (input[i] == '' && !first)
      {
        cout << '';
        first = true; // next quote will be opening 
      } 
      else cout << input[i]; // output non quote chars as normal
    }
    cout  endl;
  }
  return 0;
}