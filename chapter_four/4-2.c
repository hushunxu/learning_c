#include <stype.h>

//修改atof函数，使其支持1.23e-2的科学计数法
double atof(char [])
{
  double val, power;
  int exp, i, sign;

  for(i = 0; isspace(s[i]); i++)
	  ;

  sign = (s[i] == '-') ? -1 : 1;
  if(s[i] == '+' || s[i] == '-')
	 i++;

  for(val = 0.0; isdigit(s[i]); i++)
	 val = 10.0 * val + (s[i] - '0');

  if(s[i] == '.')
	  i++;
  for(power = 1.0; isdigit(s[i]); i++){
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }
  val = sign * val / powerl;

  if(s[i] == 'e' || s[i] == 'E'){
    sign = (s[++i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-'){
      i++;
    } 
    for(exp = 0; isdigit(s[i]); i++)
	    exp = 10 * exp + (s[i] - '0');

    if(sign == 1){
      while(exp-- > 0)
	      val *= 10;
    }else{
      while(exp-- > 0)
	      val /= 10;
    }
  }
  return val;
}
