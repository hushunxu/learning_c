#include <stdio.h>

/*删除每个行末尾的空格及制表符，并删除完全是空格的行*/

#define MAXLINE 1000

int getlines(char line[], int maxline);
int removes(char s[]);

int main()
{
  char  line[MAXLINE];

  while (getlines(line, MAXLINE) > 0 ) {
    if (removes(line) > 0) {
      printf("%s", line);
    }
    return 0;
  }
}

int removes(char s[])
{
  int i;

  i = 0;
  while (s[i] != '\n'){
    ++i;
  }
  --i;
  while (i >= 0 && (s[i] == ' ' || s[i]  == '\t')){
    --i;
  }

  if (i >= 0) {
     ++i;
     s[i] = '\n';
     ++i;
     s[i] = '\0';
  }
  return i;
}

int getlines(char s[], int lim)
{
  int c,i,j;

  j = 0;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
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
