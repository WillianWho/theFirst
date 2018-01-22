int inserir (cliente *pCliente, int cliCont)
{
    lt;
    printf("\033[46mDados do %dº Cliente:\n",cliCont+1);
    printf("\033[40m");
    printf("Nome:\t");
    lb;
    scanf("%[^\n]s", (pCliente+cliCont)->nomeCli);

    printf("Telefone: ");
    lb;
    scanf("%[^\n]s", (pCliente+cliCont)->telefoneCli);
    
    printf("Endereço: ");
    lb;
    scanf("%[^\n]s", (pCliente+cliCont)->enderecoCli);
     
    
    cliCont++;
    lt;
    return cliCont;
}

int inserirFun(funci *pFun, int contFun)
{
    lt;
    printf("\033[44mDados do %dº Funcionário:\n",contFun+1);
    printf("\033[40m");
    printf("Nome:\t");
    lb;
    scanf("%[^\n]s", (pFun+contFun)->nome);

    printf("Telefone: ");
    lb;
      scanf("%[^\n]s", (pFun+contFun)->telefone);
    
    printf("Endereço: ");
    lb;
      scanf("%[^\n]s", (pFun+contFun)->endereco);
    
    contFun++;
    lt;
    return contFun;
}
