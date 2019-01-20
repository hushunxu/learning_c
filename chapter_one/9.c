#include <stdio.h>

/**将输入复制到输出，并将其中连续多个空格用一个空格代替**/

#define NOBLANK 'a'

int main()
{
  int c, lastc;

  lastc = NOBLANK;
  while((c = getchar() != EOF)){
    //输出非空字符	  
    if(c != ' '){
      putchar(c);
    }
    //处理空格字符
    if(c == ' '){
      //检查当前空格符是一个单个的空格符还是一串空格中的第一个空格	    
      if(lastc != ' '){
        putchar(c);
      }
    }
    lastc = c;
  }
}
