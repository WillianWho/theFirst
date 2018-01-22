int funcionarios()
{
/*Declaração de variável*/
    
    unsigned int op=0;
    funci pFun[100];
    int contFun=0;
    
    while(op!=3)
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
                default: op==3?/**/: puts("\verro! entre uma opção valida\v");
                lb;
                getchar();
                 break;
            }//switch case    

        
} //fim do while
}//cliente