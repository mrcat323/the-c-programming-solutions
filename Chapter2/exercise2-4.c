#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(void)
{
  char s1[] = "bad boys for life";
  char s2[] = "bad ";

  squeeze(s1, s2);

  /* output: oysforlife */
  printf("%s", s1);
  return 0;
}

void squeeze(char s1[], char s2[])
{
  int i, j, k;

  for (i = 0; s2[i] != '\0'; ++i) {
    for (j = k = 0; s1[k] != '\0'; ++j)
      if (s1[j] != s2[i])
	s1[k++] = s1[j];
    
    s1[k] = '\0';
  }
}
