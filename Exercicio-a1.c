#include <stdio.h>

void troca(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
} /* Fim de troca */

int main (void)
 {
    int x, y;
    printf ("Number 1:");
    scanf ("%d", &x);
    printf ("Number 2:");
    scanf ("%d", &y);
    troca (&x, &y);
    printf ("\nTroca realizada:");
    printf ("\nNumber 1: %d", x);
    printf ("\nNumber 2: %d", y);
    
    return 0;
}
