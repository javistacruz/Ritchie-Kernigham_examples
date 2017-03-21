#include <stdio.h>
/*Esta función imprime la tabla farenheit-celsius para fahr=0,20...300. Se trata de un caso particular de sumatorio*/

main()
{

  int fahr,celsius;
  int min,max,incr;

  min=0;
  max=300;
  incr=20;

  fahr=min;

  printf("Celsius\tFarenheit\n");
  printf("-------\t---------\n");
  while(fahr<=max){
    celsius=5*(fahr-32)/9;
    printf("%d\t%d\n",fahr,celsius);
    fahr=fahr+incr;
  }
}

