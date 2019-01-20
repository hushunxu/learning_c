#include <stdio.h>

/**将输入复制到输出，并将其中的制表符替换为\t,把回退符替换成\b,把反斜杠替换为\\**/

int main()
{
  int c;

  while((c = getchar()) != EOF){
    if(c == '\t'){
      printf("\\t");
    }

    if(c == 'b'){
      printf("\\b");
    }
    
    if(c == '\\'){
      printf("\\\\");
    }

    if(c != '\b' && c != '\t' && c != '\\'){
    	putchar(c);
    }
  }
}
