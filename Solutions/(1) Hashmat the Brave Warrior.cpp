/*
UVA 10055 Hashmat the Brave Warrior
Ben Sutherland
*/
#include <iostream>
using std::cin, std::cout, std::endl;

int main(void){

  long long hash, enemy; // hash army and enemy army
  while (cin >> hash  >> enemy)
  {
	/* output the absolute difference between the two armies */  
    if (hash >= enemy)
      cout << (hash - enemy) << endl;
    else 
      cout << (enemy - hash) << endl;
  }
  return(0);
}
