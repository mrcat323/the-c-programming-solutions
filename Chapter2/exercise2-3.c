#include <stdio.h>
#include <ctype.h>

int convert_to_int(int);
int htoi(char s[]);

int main(void)
{
  char s[] = "5f";
  /* just for test */
  printf("%d", htoi(s));
  
  return 0;
}

int htoi(char s[])
{
  int i, n;
  n = 0;

  for (i = 0; isxdigit(s[i]); ++i) {
    n = n * 16 + convert_to_int(s[i]);
  }

  return n;
}
// ascii conversion is Linghui Zeng's. thanks man
int convert_to_int(int c)
{
  if (isdigit(c))
    return c - '0';
  else if (c >= 'a' && c <= 'f')
    return c - 'a' + 10;
  else if (c >= 'A' && c <= 'F')
    return c - 'A' + 10;
  else
    return 0;
}
