#include <stdio.h>
/*Esta función imprime la tabla farenheit-celsius para fahr=0,20...300. Se trata de un caso particular de sumatorio*/

main()
{

  float fahr,celsius;
  int min,max,incr;

  min=0;
  max=300;
  incr=20;

  fahr=min;

  printf("Celsius\tFarenheit\n");
  printf("-------\t---------\n");
  while(fahr<=max){
    celsius=5*(fahr-32)/9;
    printf("%3.0f\t%6.1f\n",fahr,celsius);
    fahr=fahr+incr;
  }
}

