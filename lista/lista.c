/*diretiva "define"*/

#define FALSE 0
#define TRUE  1
#define lb fpurge(stdin)
#define lt system("clear")

/*direriva include*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <string.h>
#include "struct.h"
#include "inserir.h" 
#include "menu.h"
#include "cliente.h"
#include "listar.h"
#include "Funcionario.h"
#include "buscar.h"
//#include 
int main ()
{
    
    setlocale(LC_ALL, "Portuguese");
  
  int op=0;
do{
menuPrincipal (&op);

   switch (op)
   {
    case 1: 
            Clientes();
    break;
    
     case 2:
             funcionarios();
     break;
            
    default: 
            if(op==3)
            break;
            else
             puts("\033[41m \033[30merro! entre uma opção válida\033[40m");
                
            lb;
            getchar();
      break;
            
   } //switch case
} while (op!=3);
    
}//main
