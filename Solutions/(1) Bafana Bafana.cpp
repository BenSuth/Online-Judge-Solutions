/*
UVA 11805 Bafana Bafana
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

int main(void)
{
  int testCase;
  cin >> testCase;

  int N, K, P; // number of players, starting player, number of passes

  for (int i = 1; i <= testCase; i++)
  {
    cin >> N >> K >> P;
    P -= 1; // subtract 1 from k or p, if k + p = n, then (k+p)%n returns 0, but 0 is not a player
	
	/*
	* add players + passes, mod N we'll keep track of how many laps around the players happens, 
	* added 1 because output was always 1 position short
	* formatted output
	*/
    cout << "Case " << i << ": " << 1+(K+P)%N << endl;
  }
  return 0;
}