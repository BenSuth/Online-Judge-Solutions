/*
UVA 11799 Horror Dash
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl, std::string;

/* macro to find max of two numbers */
#define MAX(x,y) (x >= y)? x : y

int main(void)
{
  /* get test cases */
  int testCase; 
  cin >> testCase;

  int speed, students; // speed of student, number of students
  int max; // max speed of clown

  for (int c = 1; c <= testCase; c++)
  {
    cin >> students; // get number of students
    
    max = 0; // set max to zero
    
    while (students--)
    {
      cin >> speed;
      max = MAX(speed, max); // find new max
    }  

    cout << "Case " << c << ": " << max << endl; // formatted output 
  }
  return 0;
}