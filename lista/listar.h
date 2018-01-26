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
        
    printf("\t\033[46mEndereço\033[40m\n");
        
    printf("\tLogradouro: ");
    printf("%s\n",pCli[i].end[i].log);
        
    printf("\tRua: ");    
    printf("%s\n",pCli[i].end[i].rua);
        
    printf("\tNº da Residência: ");    
    printf("%d\n",pCli[i].end[i].casaNum);
        
    printf("\tCEP: ");    
    printf("%d\n",pCli[i].end[i].cep);
        
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
        
    printf("\t\033[44mEndereço\033[40m\n");
    
    printf("\tLogradouro: ");
    printf("%s\n",pFun[i].end[i].log);
        
    printf("\tRua: ");    
    printf("%s\n",pFun[i].end[i].rua);
        
    printf("\tNº da Residência: ");    
    printf("%d\n",pFun[i].end[i].casaNum);
        
    printf("\tCEP: ");    
    printf("%d\n",pFun[i].end[i].cep);
        
    printf("\n");
    }
    lb;
    getchar();
    lt;
}
listarClienteBuscado(cliente *pCli, int i)
{
    printf("\tNome: ");
    printf("%s\n",pCli[i].nomeCli);
        
    printf("\tTelefone: ");
    printf("%s\n",pCli[i].telefoneCli);
        
     printf("\tLogradouro: ");
    printf("%s\n",pCli[i].end[i].log);
    
    printf("\tRua: ");    
    printf("%s\n",pCli[i].end[i].rua);
    
    printf("\tNº da Residência: ");    
    printf("%d\n",pCli[i].end[i].casaNum);
    
    printf("\tCEP: ");    
    printf("%d\n",pCli[i].end[i].cep);
    
    printf("\n");
    
    lb;
    getchar();
    lt;
}
listarFuncionarioBuscado(funci *pFun, int i)
{
    printf("\tNome: ");
    printf("%s\n",pFun[i].nome);
        
    printf("\tTelefone: ");
    printf("%s\n",pFun[i].telefone);
    
    printf("\tLogradouro: ");
    printf("%s\n",pFun[i].end[i].log);
    
    printf("\tRua: ");    
    printf("%s\n",pFun[i].end[i].rua);
    
    printf("\tNº da Residência: ");    
    printf("%d\n",pFun[i].end[i].casaNum);
    
    printf("\tCEP: ");    
    printf("%d\n",pFun[i].end[i].cep);
    
    printf("\n");
    
    lb;
    getchar();
    lt;
}