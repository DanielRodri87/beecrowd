// Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.



// Entrada
// O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

// Saída
// O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

#include <stdio.h>

int main()
{
    int codigo, quantidade;
    scanf("%d %d", &codigo, &quantidade);
    if (codigo == 1)
    {
        printf("Total: R$ %.2lf\n", quantidade * 4.00);
    }
    else if (codigo == 2)
    {
        printf("Total: R$ %.2lf\n", quantidade * 4.50);
    }
    else if (codigo == 3)
    {
        printf("Total: R$ %.2lf\n", quantidade * 5.00);
    }
    else if (codigo == 4)
    {
        printf("Total: R$ %.2lf\n", quantidade * 2.00);
    }
    else if (codigo == 5)
    {
        printf("Total: R$ %.2lf\n", quantidade * 1.50);
    }
    return 0;
}