#include <stdio.h>

int bitcount(unsigned);

int main(void)
{
  /* suppose we want to count 1 bits of 255 */
  printf("%d", bitcount(255));

  return 0;
}
/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
  int b;

  for (b = 0; x != 0; x &= (x - 1), ++b)
    ;

  return b;
}
