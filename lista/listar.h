void listar (cliente *pCli, int cont)
{
    lt;
    int i=0;
    for(i=0;i<cont;i++)
    {
    printf("\t\033[46m Dados do %dº cliente \n",i+1);
    printf("\033[40m");
        
    printf("\tNome: ");
    printf("%s\n",pCli[i].nomeCli);
        
    printf("\tTelefone: ");
    printf("%s\n",pCli[i].telefoneCli);
        
    printf("\tEndereço: ");
    printf("%s\n",pCli[i].enderecoCli);
    printf("\n");
    }
    lb;
    getchar();
    lt;
}
void listarFun (funci *pFun, int cont)
{
    lt;
    int i=0;
    for(i=0;i<cont;i++)
    {
    printf("\t\033[44m Dados do %dº funcionário \n",i+1);
    printf("\033[40m");
        
    printf("\tNome: ");
    printf("%s\n",pFun[i].nome);
        
    printf("\tTelefone: ");
    printf("%s\n",pFun[i].telefone);
        
    printf("\tEndereço: ");
    printf("%s\n",pFun[i].endereco);
    printf("\n");
    }
    lb;
    getchar();
    lt;
}