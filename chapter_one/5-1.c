#include <stdio.h>

int main()
{
  int fahr;
  for(fahr = 300; fahr >= 0; fahr -= 20){
     printf("%4d %6.3f\n", fahr, (5.0 / 9) * (fahr - 32));
  }
}
