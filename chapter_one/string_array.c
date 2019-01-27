#include <stdio.h>

/*读入一组文本行，并把最长的文本行打印出来*/

#define MAXLINE 200

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/*打印最长的输入行*/
int main()
{
  int len, max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getlines(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }		  
  }
  if (max > 0) {
    printf("%s", longest);
  }
  return 0;
}

/*将一行读入到s并返回其长度*/
int getlines(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
     s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/*将from复制到to*/
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
