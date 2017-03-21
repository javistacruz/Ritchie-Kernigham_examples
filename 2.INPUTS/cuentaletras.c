#include <stdio.h>

main(){

  long caracteres;			/* ¿Por qué es 'long' y no 'int'? */

  caracteres=0;

  while(getchar()!=EOF)
    ++caracteres;			/* Contador con incremento 1 */
  printf("%ld\n",caracteres);

}
