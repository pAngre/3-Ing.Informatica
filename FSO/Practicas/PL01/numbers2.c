#include <stdio.h>

#define N 10



int main(){
    int i;
    int Number;
    
    printf("Write the numbers to be displayed: ");

    scanf("%d", &Number);

    printf("The first %d natural number are: \n", Number);
    for(i = 0; i < Number; i++){
        printf("    %d\n", i);
    }

    printf("BYE\n");
    return 0;
}