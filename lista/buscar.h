int buscaCli(cliente *pCli, int cont)
{   
    int i=0;
    char nome[100];
    int resultado=FALSE;
    int  contador=0;
        printf("\033[45mEntre o nome a ser buscado\033[40m\n");
    lb;
    scanf("%[^\n]s",nome);
 
    for(i=0;i<cont;i++)
    {
    if(!strcmp(nome,pCli[i].nomeCli))
        {
            resultado=TRUE;
            contador=i;
            break;
            }//if
    }//for
    if(resultado)
    listarClienteBuscado(pCli,contador);
    lb;
    getchar();
}
int buscaFun(funci *pFun, int cont)
{   
    int i=0;
    char nome[100];
    int resultado=FALSE;
    int  contador=0;
        printf("\033[45mEntre o nome a ser buscado\033[40m\n");
    lb;
    scanf("%[^\n]s",nome);
 
    for(i=0;i<cont;i++)
    {
    if(!strcmp(nome,pFun[i].nome))
        {
            resultado=TRUE;
            contador=i;
            break;
            }//if
    }//for
    if(resultado)
    listarClienteBuscado(pFun,contador);
    lb;
    getchar();
}