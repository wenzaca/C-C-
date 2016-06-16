#include <stdio.h>
#include <string.h>

main ()
{
   int numero1; // -32768 a 32767
   numero1=10;
   printf("Trabalhando com numeros inteiros.\n");
   printf("%d\n",numero1);
   numero1=32767;
   printf("%d\n",numero1);
   printf("Trabalhando com numeros reais.\n");
   float numero2;
   numero2=3.15;
   printf("%f\n",numero2);
   printf("%.2f\n",numero2);
   printf("Trabalhando com caracteres.\n");
   char letra;
   letra='a';
   printf("%c\n",letra);
   printf("Trabalhando com cadeia de caracteres\n");
   char universidade [20];
   strcpy(universidade,"PUC");
   printf("%s\n",universidade);


  /*int numero1; // -32768 a 32767
   numero1=10;
   printf("%dz\n",numero1);
   numero1=32767;
   printf("%d\n",numero1);
   numero1=numero1+10;
   printf("%d", numero1);*/
}
