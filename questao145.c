#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50], string2[50];
    int i, j, k, l;
    int maior = 0, cont = 0;

    while (scanf("%[^\n]%*c", string1) != EOF)
    {
        scanf("%[^\n]%*c", string2);

        for (i = 0; i < strlen(string1); i++)
        {
            for (j = 0; j < strlen(string2); j++)
            {
                if (string1[i] == string2[j])
                {
                    cont = 0;
                    for (k = i, l = j; k < strlen(string1) && l < strlen(string2); k++, l++)
                    {
                        if (string1[k] == string2[l])
                        {
                            cont++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (cont > maior)
                    {
                        maior = cont;
                    }
                }
            }
        }
        printf("%d\n", maior);
        maior = 0;
    }

    return 0;
}