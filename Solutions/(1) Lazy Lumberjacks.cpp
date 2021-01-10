/*
UVA 11936 The Lazy lumberjacks
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

/* Swap to integers */
void swap(int *X, int *Y)
{
  int temp = *X;
  *X = *Y;
  *Y = temp;
}

int main() 
{
  int N, a, b, c; // test case size, 3 sides of possible triangle
  cin >> N;
  
  while (N--)
  {
	/* a, b and c such that a <= b <= c */  
    cin >> a >> b;
    if (a > b) swap(&a, &b);
    cin >> c;
    if (b > c) swap(&b,  &c);

    if (a + b <= c) cout << "Wrong!!" << endl; // its not a triangle if the two smaller sides are greater less than the third side
    else cout << "OK" << endl; // is a triangle
  }

  return 0;
}