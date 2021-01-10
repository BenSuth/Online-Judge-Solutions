/*
UVA 10071 Back to Highschool Physics
Ben Sutherland
*/
#include <stdio.h>

int main(void){
  int vel; // velocity
  int time;

  while(scanf("%d %d", &vel, &time) != EOF)
  {
    printf("%d\n", vel*time*2); // calculate displacement
  }
  return(0);
}