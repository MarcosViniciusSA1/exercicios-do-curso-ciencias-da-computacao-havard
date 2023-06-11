#include <stdio.h>



void tabuada(){

    int numero;
    printf("Vamos imprimir a tabuada de 1 ate: ");
    scanf("%d", &numero);

    int i,j;
    

    for(i=1; i<= numero;i++){
        for(j = 1; j <= 10; j++){
            printf(" o resultado de:%dx%d eh igual a:%d \n",i,j, i *j);
        }

    }
}
int main(){
    tabuada();
}
