#include <stdlib.h>
#include <stdio.h>

void main ()
{
float n1, n2, n3, maior, maior2, soma;
printf ("Informe o primeiro numero: ");
scanf ("\n%f", &n1);
printf ("Informe o segundo numero: ");
scanf ("\n%f", &n2);
printf ("Informe o terceiro numero: ");
scanf ("\n%f", &n3);
{
if (n1>n2)
       {
       if (n1>n3)
      maior = n1;
       else printf("\nn1 e o segundo maior");
      maior2 = n1;
       }
}
{
if (n2>n1)
        {
        if (n2>n3)
       maior = n2;
        else printf ("\nn2 e o segundo maior");
       maior2 =n2;
        }
}
{
if (n3>n1)
       {
       if(n3>n2)
       maior = n3;
          else printf ("\nn3 e o segundo maior");
          maior2 = n3;
       }
}
soma = maior + maior2;
printf ("\nO resultado da soma e %f", soma);
}
