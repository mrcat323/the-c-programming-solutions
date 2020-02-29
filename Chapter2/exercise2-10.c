#include <stdio.h>

int is_upper(int);
int lower(int);

int main(void)
{
  /* we want to lowercase capitalized chars */
  char s[] = "Hello World!";

  int i;

  for (i = 0; s[i] != '\0'; ++i)
    s[i] = lower(s[i]);

  /* which prints "hello world" */
  printf("%s", s);
}

int is_upper(int c)
{
  return c >= 'A' && c <= 'Z';
}
/* lower: convert c to lower case; ASCII only */
int lower(int c)
{
  return is_upper(c) ? c + 'a' - 'A' : c;
}
