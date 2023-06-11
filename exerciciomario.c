//permitir que usuário insira o tamanho de andares da pirâmide
//Se o usuário não inserir, de fato, um número inteiro positivo entre 1 e 8, 
//inclusive, quando solicitado,o programa deve solicitar novamente ao usuário até que ele coopere:

#include <stdio.h>

void piramide();

int main(){
    piramide();
}


void piramide(){

    int andar_piramide;
    do{
        printf("Digite a quantidade de andares que voce quer que a piramide tenha: ");
        scanf("%d", &andar_piramide);
   }while (andar_piramide < 1 && andar_piramide > 8);
   
    int i,j,k;
    int espacos = andar_piramide - 1;
    char palavra[] ="#";

    for(i = 0; i <andar_piramide; i++){
        for(j = 0; j<=espacos;j++){
        }
        espacos--;
        for(k = 0; k<=i; k++){ 
            printf("%s",palavra);      
        }
    printf("\n");
    }
}