/* 
UVA 488 Triangle Wave
Ben Sutherland
*/
#include <iostream> 
using std::cin, std::cout, std::endl;

/* Print a triangle wave */
void printWave (int num)
{
  int repeat = num*2; // print 2*num rows
  int temp = num - 1; // used to print the second half of the triangle wave 
  for (int i = 1; i <= repeat ; i++)
  {
	// prints the ascending part of the triangle  
    if (i <= num)
    {
      for (int k = 0; k < i; k++)
        cout << i;
      cout << endl;
    }
	// prints the descending part of the triangle
    else 
    {
	  // prints temp j times, temp is initially n - 1, decrease temp after loop
      for (int j = 0; j < temp; j++)
        cout << temp;
      if (temp != 1) cout << endl; // do not put a new line after 1 is printed
      --temp;
    }
  }
  return;
}

int main(void){

  int testCase;
  cin >> testCase;
  int maxCase = testCase;

  int freq, height; // frequency and height of wave
  char blank;
  while (testCase--)
  {
    cin >> height >> freq; 

    for (int j = 0; j < freq; j++)
    {  
      /* if height is 1, just print 1 */
      if (height == 1)
      {
		// print 1 new line if this is last wave being printed
        if (j == freq - 1 && testCase > 0)
          cout << 1 << endl;
	  
		// print 2 new lines if this is not the last frequency or last test case
        else if (j != freq - 1 || testCase != 0)
          cout << 1 << endl << endl;
        else 
          cout << 1;
      }
      else 
      {
        printWave(height); // print the wave
		
		// print a new line unless its the last frequency or last test case
        if (j != freq - 1 || testCase != 0)
        cout << endl;
      }  
    }
  } 
}