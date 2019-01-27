#include <stdio.h>

/*将输入的制表符替换成适当数目的空格，使空格充满到下一个制表符终止的地方*/

#define TABINC 8

int main()
{
  int c, nb, pos;
  nb = 0;
  pos = 1;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
    	nb = TABINC - (pos - 1) % TABINC;
	while (nb > 0) {
	  putchar(' ');
	  ++pos;
	  --nb;
	}
    } else if (c == '\n') {
      putchar(c);
      pos = 1;
    } else {
      putchar(c);
      ++pos;
    }
  }

}
