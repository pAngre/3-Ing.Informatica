#include <stdio.h>

int main(int argc, char *argv[]) {
     for(int i = 0; i < argc; i++){
         if(argv[i][0] == '-'){
             printf("Argumento %d es ", i);
        switch(argv[i][1]){
             case 'c':
                 printf("Compilar\n");
                 break;
             case 'E':
                 printf("Procesar\n");
                 break;
             case 'i':
                 printf("Incluir  %s\n", &argv[i][2]);
                 break;
             default:
                 break;
        }


    }
    }
    return 0;
}
