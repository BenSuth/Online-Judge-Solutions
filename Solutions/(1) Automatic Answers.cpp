/*
UVA 11547 Automatic Answer
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

int main(void)
{
  int testCase;
  cin >> testCase; // get number of test cases
  int num;

  while (testCase--)
  {
    cin >> num; // get number
	
	/* 
	* peform operations in correct order 
	* to get 10 digit, get the remainder of num/100 then divide by 10
	* output the absolute value, to not get negative 10s digits 
	*/
    cout << abs(((((((num*567)/9) + 7492)*235)/47) - 498)%100/10) << endl;
  }
  return 0;
}