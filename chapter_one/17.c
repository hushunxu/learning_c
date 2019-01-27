#include <stdio.h>

/*打印长度大于80个字符的所有输入行*/

#define MAXLINE 1000
#define LONGLINE 80

int getlines(char line[], int maxline);

int main()
{
  int len;
  char line[MAXLINE];

  while ((len = getlines(line, MAXLINE)) > 0) {
    if (len > LONGLINE) {
      printf("%s", line);
    }
  }
  return 0;
}

int getlines(char s[], int lim)
{
  int c, i, j;

  j = 0;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
    if(i < lim - 2) {
      s[j] = c;
      ++j;
    }
  }
  if (c == '\n') {
    s[j] = c;
     ++j;
     ++i;
   }
  s[j] = '\0';
  return i;
}
