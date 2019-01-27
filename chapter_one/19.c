#include <stdio.h>

/*编写函数reverse将字符串中的字符顺序颠倒过来，使用该函数编写一个程序，每次颠倒一个输入行中的字符顺序*/

#define MAXLINE 1000

int getlines(char line[], int maxline);
void reverse(char s[]);

int main()
{
  char line[MAXLINE];

  while (getlines(line, MAXLINE) > 0) {
    reverse(line);
    printf("%s", line);
  }
}

void reverse(char s[])
{
  int i, j;
  char temp;

  i = 0;
  while (s[i] != '\0') {
    ++i;
  }
  --i;
  if (s[i] == '\n') {
    --i;
  }
  j = 0;
  while (j < i) {
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    --i;
    ++j;
  }
}

int getlines(char s[], int lim)
{
  int c, i, j;

  j = 0;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
    if (i < lim -2) {
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
