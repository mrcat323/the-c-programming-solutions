#include <stdio.h>

unsigned invert(unsigned, int, int);

int main(void)
{
  /* the result is 195 (1100 0011) */
  printf("%u", invert(255, 5, 4));
  return 0;
}
/* invert: returns x with the n bits that begin at position p inverted */
unsigned invert(unsigned x, int p, int n)
{
  return x ^ (~(~0 << n) << p + 1 - n);
}
