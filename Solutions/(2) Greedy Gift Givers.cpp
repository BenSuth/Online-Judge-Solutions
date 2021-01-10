/* 
UVA 119 Greedy Gift Givers
Ben Sutherland
*/
#include <iostream>
#include <cmath>
#include <set>
using std::cin, std::cout, std::endl, std::string, std::pair;

int main(void)
{
  int space = 1;
  pair <string, int> names[10]; // store each person and money
  int groupSize; // size of group
  string giveTo; // person being given a gift
  string giving; // person giving the gift
  int index;
  int divider;
  int money;
  while (cin >> groupSize)
  {
	/* get all group names, balance is 0 */
    for (int i = 0; i < groupSize; i++) 
    {
      cin >> names[i].first; 
      names[i].second = 0;
    } 

    for (int i = 0; i < groupSize; i++)
    {
      cin >> giving; // get a giver
      for (int j = 0; j < groupSize; j++)
      {
        if (giving == names[j].first) index = j; // find the giver and store there index 
      }
      cin >> money >> divider; // get money given and to how many people
      if (divider == 0) continue;
      names[index].second = names[index].second - money + money%divider; // subtract money from giver
      
	  // find who the money is being given to, add money to that person
	  for (int j = 0; j < divider; j++)
      {
        cin >> giveTo;
        for (int k = 0; k < groupSize; k++)
        {
          if (giveTo == names[k].first)
          {
            names[k].second += money/divider;
          }
        }
      }
    }

    if (space++ > 1) cout << endl; // add space, but not for first output
    for (int i = 0; i < groupSize; i++) 
    {
      cout << names[i].first << " " << names[i].second << endl;
    } 
  }
  return 0;
}