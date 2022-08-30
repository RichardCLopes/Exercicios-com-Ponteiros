#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    int i, n, *pvetor, aux=0, aux2;
    float media;

    /* Define um valor para n , scanf ou n =*/
    puts("Quantas espacos quer alocar?");
    scanf("%d", &n);

    /* aloca espaco na memoria */
    pvetor = (int*) malloc(n*sizeof(int));
    if(!pvetor)
    {
        puts("Sem memória.");
        return 1;
    }

    /* aqui uso pvetor , vamos ler e somar um vetor */
    media=0.0;
    for(i=0;i<n;i++)
    {
        printf("Valor do espaco %d: ", i+1);
        scanf ("%d", pvetor+i);
        media+=*(pvetor+i);
    }
    media=media/n;

    /* verifica valores acima da media*/
    puts("\nValor(es) acima da media: ");
    for(i=0;i<n;i++)
    {
        aux2=(float)*(pvetor+i);
        if(aux2>media)
        {
            printf("%d / ", aux2);
            aux=aux+1;
        }
    }
    printf ("\nNo total tem %d valor(es) acima da media %.2f.\n", aux, media);
    /* aqui nao preciso mais de pvetor */
    free(pvetor);

    return 0;
}
