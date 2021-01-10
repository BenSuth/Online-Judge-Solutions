/*
UVA 382 Perfection
Ben Sutherland
*/
#include <iostream>
#include <stdio.h>
using std::cin, std::cout, std::endl, std::fixed;

/* Function to find perfect numbers
 * return 1 if abundant, 0 if perfect, -1 if deficient
 */ 
int isPerfect(int num)
{
  int sum = 0;
  // sum divisors of num
  for (int i = 1; i < num/2 + 1; i++)
    if (num%i == 0) sum += i;
  
  // return statements
  if (sum > num) return 1;
  return (num == sum)? 0: -1;
}
int main() 
{
  int num;
  bool first = true; // print the first line once

  while (cin >> num && num)
  {
    if (first) cout << "PERFECTION OUTPUT" << endl;
    first = false;
	// formatted output / call isperfect function
    printf("%5d  ", num); 
    if (isPerfect(num) == 0) cout << "PERFECT" << endl;
    else if (isPerfect(num) > 0) cout << "ABUNDANT" << endl;
    else cout << "DEFICIENT" << endl;
  }
  cout << "END OF OUTPUT" << endl;

  return 0;
}