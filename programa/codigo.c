#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
    //definicao das variaveis
    float valor1, valor2, resultado;
    char conver;

    do
    {
        //escolha de conversao
        printf("Para Converter KM para Milhas coloque a\n");
        printf("Para Converter Milhas para KM coloque b\n");
        scanf("%c", &conver);
    
        //dois casos de conversao
        switch(conver){
        //caso a
            case 'a':
            printf("Digite os KMs:\n");
            scanf("%f", &valor1);
            resultado = valor1 * 0.62137;
            printf("A distancia em Milhas e: %.3f\n", resultado);
            break;
        
            //caso b
            case 'b':
            printf("Digite as Milhas:\n");
            scanf("%f", &valor2);
            resultado = valor2 * 1.609344;
            printf("A distancia em KM e: %.3f\n", resultado);
            break;
        
            //caso default
            default:
            printf("Opcao invalida tente novamente\n");
        }
        
    } while (conver);

    return 0;

}