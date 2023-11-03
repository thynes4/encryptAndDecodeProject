 /****************************************
 * Thomas Hynes
 *
 * Takes a binary character and adds it to number until the number reaches 
 * 8 bits, then prints that 8-bit numbers character represention. keeps track of
 * word count, line count, and character count and prints information throughout
 * the file.
 *
 ****************************************/


#include <stdio.h>

int main(void)
{
  int i = 7, b, c = 0;
  int cc = 0; /*character count on current line */
  int lc = 0; /* total lines */
  int wc = 0; /* total words */
  int tc = 0; /* total characters */

  while ((b = getchar()) != EOF)
  {
    if (i < 0)
    {
      putchar(c);
      if (c == ' ') wc++;
      i = 7;
      c = 0;
      cc++;
    }

    if (b == '\n')
    {
      if (cc != 0) wc++;
      lc++;
      i=7;
      printf(" (%d,%d)\n",lc,cc);
      tc += cc;
      cc = 0;
      continue;
    }

    else if (b == '1')
    {
      c |= 1 << i;
      i--;
      continue;
    }

    else if (b == '0')
    {
      i--;
      continue;
    }
  }
  printf("\nThere are %d characters, %d words, %d lines\n", tc, wc, lc);
  return 0;
}
