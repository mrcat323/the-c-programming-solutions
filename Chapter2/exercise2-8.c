#include <stdio.h>
#define     INT_BITS     32

int rightrot(int x, unsigned int n);

int main(void)
{
  /* result == 4 */
  printf("%d", rightrot(16, 2));
  

  return 0;
}

int rightrot(int x, unsigned int n)
{
  return (x >> n) | (x << (INT_BITS - n));
}
