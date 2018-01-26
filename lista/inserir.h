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
    
    printf("\033[46mEndereço\033[40m\n");
    printf("Logradouro: ");
    lb;
    scanf("%[^\n]s", (pCliente[cliCont].end+cliCont)->log);
    
     printf("Rua: ");
    lb;
    scanf("%[^\n]s", (pCliente[cliCont].end+cliCont)->rua);
    
    printf("Nº Residência: ");
    lb;
    scanf("%d", &(pCliente[cliCont].end+cliCont)->casaNum);
    
    printf("CEP: ");
    lb;
    scanf("%d", &(pCliente[cliCont].end+cliCont)->cep);
    
    
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
    
    printf("\033[44mEndereço\n\033[40m");
    printf("Logradouro: ");
    lb;
    scanf("%[^\n]s", (pFun[contFun].end+contFun)->log);
    
     printf("Rua: ");
    lb;
    scanf("%[^\n]s", (pFun[contFun].end+contFun)->rua);
    
    printf("Nº Residência: ");
    lb;
    scanf("%d", &(pFun[contFun].end+contFun)->casaNum);
    
    printf("CEP: ");
    lb;
    scanf("%d", &(pFun[contFun].end+contFun)->cep);
    
    
    
    contFun++;
    lt;
    return contFun;
}
