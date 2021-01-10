/*
UVA 10082 WERTYU
Ben Sutherland
*/
#include <stdio.h>
#define SHIFT 1

int main(void)
{
  char input; // get each char of the sentence
	
  /* translate keyboard to array */
  const char keyboard[] = 
  {
	'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
	'Q', 'W', 'E' ,'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
	'A', 'S', 'D' ,'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',		
	'Z', 'X', 'C' ,'V', 'B', 'N', 'M', ',', '.', '/', ' ', '\n'
  };
	
  while (scanf("%c", &input) != EOF)
  {
	/* print whitespace, no shifts */  
	if (input == ' ' || input == '\n') printf("%c", input);
	
	/* linear search the keyboard array, then print the index of the char - 1 */
	else 
    {
		for (int i = 0; i < sizeof(keyboard); i++) if (keyboard[i] == input)printf("%c", keyboard[i-1]);
    }   
  }  
  
  return 0;
}