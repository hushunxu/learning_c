#include <stdio.h>

/**摄氏度转华氏温度**/

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahr, Celsius\n");
  celsius = lower;
  while(celsius <= upper){
	  fahr = (9.0 / 5.0) * celsius + 32;
          printf("%3.0f %6.1f\n", celsius, fahr);
	  celsius = celsius + step;
  }	  
}
