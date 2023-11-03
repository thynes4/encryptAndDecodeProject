 /******************************************************************
 * Thomas Hynes
 *
 * Takes in a file with characters and translates it into a file
 * containing the ascii representation of the charaters in binary.
 ******************************************************************/

#include <stdio.h>

int main(void)
{
  int i, c;

  while ((c = getchar()) != EOF)
  {
    if (c > 125 || c < 32)
    {
      putchar(c);
      continue;
    }
    for (i = 7; i >= 0; i--) printf(c & (1 << i) ? "1" : "0");
  }
  return 0;
}
