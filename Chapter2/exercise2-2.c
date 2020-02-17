#include <stdio.h>
#define    LIMIT    1000
#define    EOL      '\n'

int main(void)
{
  int i, j, c;
  char string[LIMIT];

  i = 0;

  while (c = getchar()) {
    if (i <= LIMIT - 1) {
      if (c == EOL)
	break;
      else if (c == EOF)
	break;
      else
	string[i++] = c;
    } else
      break;
  }

  printf("Here is your string: ");

  /* Why I didn't printed the string with printf ? Because I could have "unwanted" chars (symbols) */
  /* that's why I just printed char by char from the array */

  for (j = 0; j < i; ++j)
    putchar(string[j]);

  return 0;
}
