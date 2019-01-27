#include <stdio.h>

/*查找c语言中程序中的基本语法错误，如圆括号、方括号、以及花括号不配对等。要处理处理引号（包括单引号、双引号）、转义字符与注释*/

int brace, brack, paren;

void in_quote(int c);
void in_comment(void);
void search(int c);

int main()
{
  int c;
  extern int brace, brack, paren;
  while ((c = getchar()) != EOF) {
    if (c == '/') {
      if ((c = getchar()) == '*') {
        in_comment();
      } else {
        search(c);
      }
    } else if (c  == '\'' || c == '"') {
      in_quote(c);
    } else {
      search(c);
    }

    if (brace < 0 ){
      printf("Unbalanced braces\n");
      brace = 0;
    } else if (brack < 0) {
      printf("Unbalanced bracks\n");
    } else if (paren < 0 ){
      printf("Unbalanced parentheses\n");
    }
  }

  if (brace > 0) {
    printf("Unbalanced braces\n");
  }

  if (brack > 0){
    printf("Unbalanced bracks\n");
  }

  if (paren > 0) {
    printf("Unbalanced parentheses\n");
  }
}

void search(int c)
{
  extern int brace, brack, paren;

  if (c == '{') {
    ++brace;
  } else if (c == '}') {
    --brace;
  } else if (c == '[') {
    ++brack;
  } else if (c == ']') {
    --brack;
  } else if (c == '(') {
    ++paren;
  } else if (c == ')') {
    --paren;
  }
}

void in_comment()
{
  int c,d;
  c = getchar();
  d = getchar();
  while (c != '*' || d != '/') {
    c = d;
    d = getchar();
  }
}

void in_quote(int c)
{
  int d;
  while ((d = getchar()) != c) {
    if (d == '\\') {
      getchar();
    }
  }
}
