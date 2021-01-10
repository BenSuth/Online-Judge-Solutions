/*
UVA 10970 Big Chocolate
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

int main()
{
  /* Dimensions of chocolate bar */
  int m;
  int n;
  
  /* the maximum number of cuts you can make is
   * one less then the number of blocks that make the chocolate (3*3 = 9 blocks, seperate with 8 cuts)
  */
  while (cin >> m >> n) cout << m*n - 1 << endl;
}