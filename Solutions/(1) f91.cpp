/*
UVA 10696 f91
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

/* calculate f91 number recursively */
int f91(int num)
{
  /* both statements are given in question */	
  if (num >= 101) return num - 10;
  return f91(f91(num + 11));
}
int main() 
{
  int num; // num to check
  
  // call f91 function, formatted output */
  while (cin >> num && num) cout << "f91(" << num << ") = " << f91(num) << endl; // call f91 function / formatted output
  return 0;
}