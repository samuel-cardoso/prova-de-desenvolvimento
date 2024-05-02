/* A1-PSC | Prova de Programação de Soluções Computacionais

Tarefa avaliativa que consiste em escrever um algoritmo em C ou C++ ou Java, no qual devem ser lidas 2 variáveis do tipo int.

- Crie um procedimento com 2 parâmetros do tipo inteiro que recebam os valores que foram digitados. Informe quantos valores são positivos maiores que zero) e quantos valores são negativos (menores que zero). (sem retorno, com a saída no console - printf/cout/System.out.println - realizada pelo procedimento)
 
- Crie uma função que recebe 3 parâmetros do tipo float (teste passando que devem ser o primeiro e o segundo valores digitados pelo usuário e, como terceiro parâmetro, a soma do primeiro e do segundo valor). Calcule a média ponderada dos 3 valores considerando, respectivamente, os pesos 1, 3 e 5. Esta função deve retornar a média final. Esta média deve ser exibida no console, mas não pela função.
 
- Crie uma função do tipo inteiro com dois valores inteiro como parâmetro, atribuindo os valores que foram digitados. Mostre a tabuada dos dois valores (obrigatório usar uma estrutura de repetição para multiplicar os números de 1 até 10). A função deverá retornar a soma dos resultados de todas as operações das duas tabuadas. Esta função também deve apresentar a média ponderada (pesos 1, 3 e 5) para os seguintes 3 valores: os dois valores usados como entrada desta função e a soma dos resultados de todas as operações.

Dica: crie um procedimento de cada vez e comece a estruturá-los depois de fazer a leitura das 2 variáveis inteiro. Chame os dois procedimentos e a função dentro do main.

*/

#include <stdio.h>
#include <stdlib.h>

    // Função que retorna a média ponderada dos valores recebidos com a soma desses valores.
float mediaPonderada(valor1, valor2)
{   
    // Calculando a média ponderada e retornando seu resultado.
    float valor3 = valor1 + valor2;
    float mediaP = ((valor1 * 1) + (valor2 * 3) + (valor3 * 5)) / (1 + 3 + 5);
    return mediaP;
}

    // Função que constrói as tabuadas, faz a soma de seus resultados, faz o cálculo da média ponderada e retorna seu resultado.
int tabuadas(valor1, valor2)
{   
    int res1[10]; 
    int res2[10];

    // Construção da primeira tabuada.
    printf("\n == Tabuada do %d ==\n\n", valor1);
    for (int numeros = 1; numeros <= 10; numeros++)
    {
        printf("  %d x %d = %d\n", valor1, numeros, res1[numeros] = numeros * valor1);
    }        

    int somaTab1 = res1[1]+res1[2]+res1[3]+res1[4]+res1[5]+res1[6]+res1[7]+res1[8]+res1[9]+res1[10];

    // Construção da segunda tabuada.
    printf("\n == Tabuada do %d ==\n\n", valor2);
    for (int numeros = 1; numeros <= 10; numeros++)
    {   
        printf("  %d x %d = %d\n", valor2, numeros, res2[numeros] = numeros * valor2);
    }
    
    int somaTab2 = res2[1]+res2[2]+res2[3]+res2[4]+res2[5]+res2[6]+res2[7]+res2[8]+res2[9]+res2[10];

    // Construção da soma dos resultados das duas tabuadas e aplicando a média ponderada e a retornando.
    int somaTab1e2 = somaTab1 + somaTab2;
    printf("\n\n A soma de todos os resultados das duas tabuadas: %d",somaTab1e2);
    return somaTab1e2; 
}


void main()
{   
        // Criação das variáveis e requerimento referente as informações apresentadas.
    int valor1, valor2;

    printf("\n ===== Tarefa Avaliativa =====\n\n");
    printf(" Digite um numero: ");
    scanf("%d", &valor1);
    printf(" Digite outro numero: ");
    scanf("%d", &valor2);

            // Verificação dos números digitados.
        if (valor1 > 0 && valor2 > 0)
        {
            printf("\n Temos dois numeros positivos: %d, %d", valor1, valor2);
        }
        else if (valor1 < 0 && valor2 < 0)
        {
            printf("\n Temos dois numeros negativos: %d, %d", valor1, valor2);
        }
        else if (valor1 > 0 && valor2 < 0)
        {   
            printf("\n Temos um numero positivo %d e um numero negativo %d ", valor1, valor2);
        }
        else if (valor1 < 0 && valor2 > 0)
        {
            printf("\n Temos um numero negativo %d e um numero positivo %d ", valor1, valor2);
        } 

        //Chamando as funções, realizando a média ponderada e imprimindo na tela os resultados.
    float mediaFinal = mediaPonderada(valor1, valor2);
    printf("\n\n Media Final = %.1f\n", mediaFinal);

    int somaTab1e2 = tabuadas(valor1, valor2);
    int mediaPond = ((valor1 * 1) + (valor2 * 3) + (somaTab1e2 * 5)) / (1 + 3 + 5);
    printf("\n\n Media ponderada dos valores %d, %d e %d: %d\n\n", valor1, valor2, somaTab1e2, mediaPond);
} 