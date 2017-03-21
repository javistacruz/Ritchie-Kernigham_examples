#include <stdio.h>

/* Este programa cuenta las líneas de texto introducidas antes del EOF */

main(){

  int c,nl;

  nl=0;

  while ((c=getchar())!=EOF)
    if(c=='\n')
      ++nl;

  printf("%d\n",nl);

}
