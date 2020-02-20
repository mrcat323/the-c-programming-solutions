/* any: returns the first location in the string s1 where any character from string s2 occurs, 
or -1 if s1 contains no characters from s2 */
#include <stdio.h>

int any(char s1[], char s2[]);

int main(void)
{
  char s1[] = "bad boys for life";
  char s2[] = "y";

  printf("%d", any(s1, s2));

  return 0;
  
}

int any(char s1[], char s2[])
{
  int i, j;

  /* if the function finds a match in first array, it return its positio */
  /* otherwise, returns -1 */
  
  for (i = 0; s1[i] != '\0'; ++i)
    for (j = 0; s2[j] != '\0'; ++j)
      if (s1[i] == s2[j])
	return i;

  return -1;
}
