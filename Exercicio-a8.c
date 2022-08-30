#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    int i, j, n, *pvetor, aux;

    /* Define um valor para n , scanf ou n =*/
    puts("Quantas espacos quer alocar?");
    scanf("%d", &n);

    /* aloca espaco na memoria */
    pvetor=(int*) malloc(n*sizeof(int));
    if(!pvetor)
    {
        puts("Sem memória.");
        return 1;
    }

    /* aqui uso pvetor , vamos ler um vetor */
    for(i=0;i<n;i++)
    {
        printf("Valor do espaco %d: ", i+1);
        scanf ("%d", pvetor+i);
    }

    /* ordena de forma crescente*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(pvetor+j)>*(pvetor+i))
            {
                aux=*(pvetor+j);
                *(pvetor+j)=*(pvetor+i);
                *(pvetor+i)=aux;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for(i=0;i<n;i++)
    {
        printf("%d / ", *(pvetor+i));
    }

    /* aqui nao preciso mais de pvetor */
    free(pvetor);

    return 0;
}