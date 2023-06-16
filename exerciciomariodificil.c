
/*  Veja como o programa pode funcionar se o usuário inserir 4 quando solicitado:

$ ./mario
Altura: 4
   #  #
  ##  ##
 ###  ###
####  #### */
#include <stdio.h>

void piramide2();

int main(){
    piramide2();
    }

void piramide2(){
    
    int andar_piramide;
    

    do {
        printf("Digite a quantidade de andares que voce quer que a piramide tenha: ");
        scanf("%d", &andar_piramide);
    }while (andar_piramide < 1 && andar_piramide > 8);
    int espaco = andar_piramide - 1;
    int i,j,k;
    
    for(i=0; i<andar_piramide; i++){//piramide esquerda
        for(j=0; j<=espaco; j++){
            printf(" ");
        }
        espaco--;
        for(k=0; k<=i; k++){
            printf("#");
        }
        printf("\n");
    }
}