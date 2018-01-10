char inserir(char palavra[])
{
    char letraTempo;
    char letra;
    int cont=0;
     int flag=0;
    


    do{
        flag=0;
  printf("Digite uma letra\n");
                    lb;
                    scanf("%c",&letra);
                    lt;
    for(cont=0; cont<strlen(palavra); cont++)
{
if(letra==palavra[cont])
flag=1;
}        
        
if(flag==1)
printf("Letra \"%c\" já entrada: %s\n",letra,palavra);

        }while(flag==1);
                
return letra;
}






void inserirPalavra(char *pPalavra)
{
printf("Digite uma palavra\n");
    lb;
    scanf("%[^\n]s",pPalavra);
}



