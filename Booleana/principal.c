#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define true 1
#define false 0
#define lb fpurge(stdin)
#define lt system("clear");
#include "menu.h"
#include "inserir.h"
#include "verificar.h" 

main()
{
setlocale(LC_ALL, "Portuguese");
int num=0;
int op;
int retorno;
printf ("Verificador de números primos\n\n");
do{
menu (&op);
switch (op)
{
case 1:
inserir (&num);

retorno=verificar (num);
if(retorno)
printf("%d é primo\n", num);
else
printf("%d não é primo\n", num);

break;
default:
op==2?printf("bye\n"):printf("Opção Inválida\n");
break;
}// chave do switch
} while (op!=2);
}
