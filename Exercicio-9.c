#include<stdlib.h>
#include<stdio.h>

int main()
{
    int i, *tam;
    i=0;

    do{
        tam=(int*)malloc(i*sizeof(char));//char ocupa 1 byte
        printf("%d MB alocados\n", (i)/1000000);
        free(tam);
        i=i+1000000; //1 milhão de bytes é igual 1Mb
    }while(tam);

    return 0;
}