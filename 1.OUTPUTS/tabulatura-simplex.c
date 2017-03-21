#include <stdio.h>
/*Esta función imprime la tabla farenheit-celsius para fahr=0,20...300. Se trata de un caso particular de sumatorio*/

main()
{

  float fahr;

  printf("Celsius\tFarenheit\n");
  printf("-------\t---------\n");
  for (fahr=0;fahr<=300;fahr=fahr+20){ /* Ojito, que en fahr+20 hay enjundia */
    printf("%3.0f\t%6.1f\n",fahr,5.0/9.0*(fahr-32));
  }
}

