#include<stdio.h>

void Converter(int numeroBase10, int numeroBase2[32]);

int main (void)
{
    int nb10, nb2[32], i, teste=1;
    while (1)
    {   
        puts("Numero a ser convertido: ");
        scanf("%d", &nb10);
        if(nb10<0)
        {
            break;
        }
        for(i=0;i<32;i++)
        {
            nb2[i]=0;
        }

        Converter(nb10, nb2);
        printf("Teste %d\n", teste++);
        printf("%d\n", nb10);

        for(i=0;i<32;i++)
        {
            printf("%d", nb2[i]);
        }
        printf("\n\n");
    }

    return 0;
}

void Converter(int numeroBase10, int numeroBase2[32])
{
    int i, aux;
    i=31;

    while(numeroBase10!=0)
    {
        aux=(numeroBase10%2);
        numeroBase10=numeroBase10/2;
        numeroBase2[i]=aux;
        i--;
    }
}