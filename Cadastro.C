//Cadastro.C
//Autor: Wendler Augusto Zacariotto
//Data: 15/08/2013
//Versão: 1.0

#include <stdio.h>
#include <string.h>

main()
{
   char nome[40];
   char universidade[40];
   int idade;
   char sexo;
   char disciplina[20];
   float nota;
   printf("Digite seu nome:\n");
   fflush(stdin);
   gets(nome);
   printf("Digite seu sexo:\n");
   fflush(stdin);
   scanf("%c",&sexo);
   printf("Digite a sua idade.\n");
   fflush(stdin);
   scanf("%d", &idade);
   printf("Digite a sua universidade:\n");
   fflush(stdin);
   gets(universidade);
   printf("Digite a sua disciplina:\n");
   fflush(stdin);
   gets(disciplina);
   printf("Digite a sua nota:\n");
   fflush(stdin);
   scanf("%f", &nota);
   printf("%s do sexo %c que tem %d ano. Sua nota e %.2f da disciplina %s na universidade %s\n", nome, sexo, idade, nota, disciplina, universidade);
}
