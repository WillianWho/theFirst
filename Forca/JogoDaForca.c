
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define lb fpurge(stdin)
#define lt system("clear")
#include "tema.h"
#include "escolha.h"
#include "inserir.h"
#include "errou.h"


int main ()
{
    int menu=0;
// Declaração das variáveis
while(menu!=2){

    char *palavra1=(char*) malloc (80* sizeof(char));
    char palavra[80];
    char palavraAux[80];
    
    char letra;

    
    int cont=0;
    int op=0; 
    int n=0;
    int chance=6;
    int achou=0;
   char *t=(char*) malloc (30* sizeof(char));
    int erro=0;

    setlocale(LC_ALL, "Portuguese");


      

    if(!n>0)
    {
//Escolher o tema
t=tema(&op);
printf("Tema: %s\n",t);
lt;
// escolher a palavra da forca
if(op==1)
    palavra1 = escolherAstronomia();
if(op==2)
    palavra1 = escolherFruta ();
if(op==3)
    palavra1 = escolherCidade();
if(op==4)
    palavra1 = escolherPais();
if(op==5)
    palavra1 = escolherProfissao();
else
printf("Opção inválida\n");


    
    }lt;


for(cont=0; cont<strlen(palavra1); cont++)
palavra[cont]=palavra1[cont];   



  for(cont=0; cont<strlen(palavra1); cont++)
palavraAux[cont] = palavra[cont];

for(cont=0; cont<strlen(palavra1); cont++)
        palavra[cont] = '_';


lt;

// Único while
    while(n<strlen(palavra1))
    {// Enquanto tamanho da palavra maior que "n"
        
        if(n<strlen(palavra1)) //1º if
           {// Se o tamanho da palavra for maior que "n"



            for(cont=0; cont<strlen(palavra); cont++)
            { // 2º for
// Inserindo a primeira letra

                
                  
                  letra=inserir(palavra);
            

// Verificando se a letra foi está na palavra
                 for(cont=0; cont<strlen(palavra); cont++)
                 { //3º for

                        
             
if(letra==palavraAux[cont])
{//2º if
             
          
            
                palavra[cont] = letra;
                        n++;
                                
                      
                    achou=1;  
                    


                    } // Chaves do 2º if

                }// Chaves do 3º for
           

  if(achou != 1)
                {// 3º if
                chance--;

n=naoAchou( chance, n,palavraAux,letra);
				

                }//Chaves do 3º if
               
                 if(n==strlen(palavra))
                   printf("Parabéns, a palavra era:\n");
                
                if(n<1000)
                {
                 if(n<strlen(palavra))
                    printf("Tema: %s\n",t);
               
                      printf("%s\n",palavra);
                    }
                achou = 0; 
                 

          
 }// Chaves do 2º for

              } // Chaves do 1º if
        }// segundo while
        
        menuFinal(&menu);
        lt;
        }// primeiro while
        
    lb;
    getchar();
        

    }// Chaves do main


