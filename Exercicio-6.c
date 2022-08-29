#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    int i=1, n, *pvetor;
    float media;
    
    /* Define um valor para n , scanf ou n =*/
    puts("Quantas espacos quer alocar?");
    scanf("%d", &n);
    
    /* aloca espaco na memoria */
    pvetor = (int *) malloc(n * sizeof(int));
    if(!pvetor)
    {
        puts("Sem memória.");
        return 1;
    }

    /* aqui uso pvetor , vamos ler um vetor */
    for (i=0;i<n;i++)
    {
        printf("Valor do espaco %d: ", i+1);
        scanf("%d", pvetor+i);
    }

    /* faco alguma coisa */
    media=0.0;
    for (i=0;i<n;i++)
    {
        media += *(pvetor+i);
    }
    printf("\nMedia: ");
    printf("%.2f\n", media/n);

    /* aqui nao preciso mais de pvetor */
    free(pvetor);

    return 0;
}