#include<stdio.h>

void misterio(char *n);

int main()
{
    char nome[41];
    puts("Entre com o seu nome e um sobrenome:");
    gets(nome);
    misterio(nome);
    return 0;
}

void misterio(char *n)
{
    while(*n != ' ') 
    {
        n++;
    }
    n++;
    puts("\nSobrenome: ");
    puts(n);
}