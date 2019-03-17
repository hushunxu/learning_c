#include <stdio.h>

int main()
{
	//'9'在ascii码中代表57
	char a='9';
    int b=3;
    int c=0;

    c=a+b;
   	printf("%d\n",c);//60

   	//先将字符9转为数字9
    int f = 0;
    f = a - '0';   
   	c=f+b;
   	printf("%d\n",c);//12
   	return 0;
}