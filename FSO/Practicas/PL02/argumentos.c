#include <stdio.h>

int main(int argc, char *argv[]) {   
     printf("Numero de argumentos = %d", argc);
     for(int i = 0; i < argc; i++){
          printf("\n     Argumento %d es %s ", i, argv[i]);
     }
     printf("\n");
}

