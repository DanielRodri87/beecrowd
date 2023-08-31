#include <stdio.h>

int main()
{
    int qtd, altura, diametro, galhos;

    scanf("%d", &qtd);
    while (qtd > 0)
    {
        scanf("%d %d %d", &altura, &diametro, &galhos);
        if (altura >= 200 && altura <= 300)
        {
            if (diametro >= 50)
            {
                if (galhos >= 150)
                {
                    printf("Sim\n");
                } else
                {
                    printf("Nao\n");
                }
            } else
            {
                printf("Nao\n");
            }
            
        } else
        {
            printf("Nao\n");
        }
        qtd--;

    }
    return 0;
}

