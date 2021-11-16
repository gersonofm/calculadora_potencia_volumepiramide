#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculadora() {

    float num1;
    float num2;
    int opcao;

    do {
        
        printf("\n\n");
        printf("****************************************\n");
        printf("+-             Calculadora            */\n");
        printf("+- Escolha a operacao a ser realizada */\n");
        printf("****************************************\n");

        printf("\n\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n\n");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 5) {
            printf("\nDigite os dois valores: ");
            scanf("%f%f", &num1, &num2);
        }

        switch(opcao) {

            case 0:
                printf("\nSaindo ...\n");
                break;

            case 1:
                printf("\nSoma: %.1f", num1 + num2);
                break;

            case 2:
                printf("\nSubtracao: %.1f", num1 - num2);
                break;

            case 3:
                printf("\nMultiplicacao: %.1f", num1 * num2);
                break;

            case 4:
                while(num2 == 0) {
                    printf("Nao existe divisao por zero!\nDigite outro valor: ");
                    scanf("%.1f", &num2);
                }
                printf("\nDivisao: %.1f", num1 / num2);
                break;
            
            default:
                printf("Opcao invalida.\nDigite outra opcao: ");
        }
    } while(opcao != 0);
}

void potencia() {

    int x;
    int y;
    
    printf("\nDigite o valor da base: ");
    scanf("%d", &x);
    printf("Digite o valor do expoente: ");
    scanf("%d", &y);
    
    int resultado = 1;
    
       for(int i=0; i<y; i++){
           resultado = resultado * x;
       }
       
       printf("\nO resultado entre %d^%d = %d\n", x,y,resultado);  
}

void piramide() {

    float basemenor, basemaior, h, volume;

printf("\nQual a area da base maior?: ");
scanf("%f", &basemaior);

printf("Qual a area da base menor?: ");
scanf("%f", &basemenor);

printf("Qual a altura: ");
scanf("%f", &h);

volume = h/3 * (basemaior + sqrt(basemaior) * basemenor * basemenor);

printf("\nO volume do tronco da piramide e: %.1f\n", volume);

}

int menu() {

    int opcao = 0;
    printf("Digite a opcao:\n\n  1 - Calculadora\n  2 - Potencia\n  3 - Piramide\n\n");
    printf("Opcao ==> ");
    scanf("%d", &opcao);
    return opcao;
}

int main () {

    switch (menu())
    {

    case 1:
        calculadora();
        break;

    case 2:
        potencia();
        break;

    case 3:
        piramide();
        break;
    }
}