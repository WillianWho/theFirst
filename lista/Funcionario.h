int funcionarios()
{
/*Declaração de variável*/
    
    unsigned int op=0;
    funci pFun[100];
    int contFun=0;
    
    while(op!=4)
        {
        menu(&op);
        printf("\033[33m"); //cor da fonte azul
         
        switch(op)
            {
                case 1:
                contFun=inserirFun(pFun,contFun);
                break;
                case 2: listarFun(pFun,contFun);
                break;
                case 3:
                buscaFun(pFun,contFun);
                break;
                default: op==4?/**/: puts("\033[41m \033[30merro! entre uma opção válida\033[40m");
                lb;
                getchar();
                 break;
            }//switch case    

        
} //fim do while
}//cliente