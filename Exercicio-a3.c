#include <stdio.h>

void troca(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
} /* Fim de troca */

int main(void)
{
    int x, y;
    int *px, *py;
    px=&x;
    py=&y;

    /* Como seria o comando scanf com px e py ao inves x e y ?
    Dica : lembre-se que era scanf ("%d %d ", &x ,&y);
    Agora olhe os dois comandos acima e verifique quem e igual a &x e &y.*/
    printf ("Number 1:");
    scanf ("%d", px);
    printf ("Number 2:");
    scanf ("%d", py);

    /* Como seria Troca com px e py ? */
    troca(px, py);

    /* Como seria printf com px e py ? */
    printf ("\nTroca realizada:");
    printf ("\nNumber 1: %d", *px);
    printf ("\nNumber 2: %d", *py);

    return 0;
}
