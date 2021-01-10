/*
UVA 10370 Above Average
Ben Sutherland
*/
#include <iostream>
#include <iomanip>
using std::cin, std::cout, std::endl, std::string, std::fixed, std::setprecision;

int main(void)
{
  // get test cases
  int testCase;
  cin >> testCase;

  int size, grade, sum, above; // size of class, grade of each student, sum of grades, count students above average

  while (testCase--)
  {
    sum = 0;
    above = 0;
    
    cin >> size;
    int gradeSet[size]; // store all students grades in class

	/* set values in array and get sum */
    for (int i = 0; i < size; i++)
    {
      cin >> grade;
      gradeSet[i] = grade;
      sum += grade;
    }

    int average = sum/size; // calculate average

	/* find grades that are above the average */
    for (int i = 0; i < size; i++) if (gradeSet[i] > average) above++;

	// formatted output
    cout << setprecision(3) << fixed << (double)above/size *100 << "%" << endl;
  }

  return 0;
}