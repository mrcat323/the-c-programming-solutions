#include <stdio.h>

unsigned setbits(unsigned, int, int, unsigned);

int main(void)
{
  /* The result is 255 (1111 1111) */
  printf("%u", setbits(195, 5, 4, 60));
  
  return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
  return (x & ~(~(~0 << n) << p + 1 - n)) | (y & ~(~0 << n) << p + 1 - n);
}
