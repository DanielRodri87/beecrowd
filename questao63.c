// Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

// Entrada
// A entrada contém um valor inteiro (V<=50).

// Saída
// Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor armazenado na posição i. O primeiro número do vetor N (N[0]) irá receber o valor de V.

#include <stdio.h>

int main()
{
    int vetor[10], n, i;
    scanf("%d", &n);
    for (i = 0; i<10; i++)
    {
        vetor[i] = n;
        n *= 2;
    }
    for (i = 0; i<10; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}