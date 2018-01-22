int Clientes()
{
/*Declaração de variável*/
    
    unsigned int op=0;
    cliente pCliente[100];
    int contCli=0;
    
    while(op!=3)
        {
        menu(&op);
        printf("\033[34m"); //cor da fonte azul
         
        switch(op)
            {
                case 1:
                contCli=inserir(pCliente,contCli);
                break;
                case 2: listar(pCliente,contCli);
                break;
                default: op==3?/**/: puts("\verro! entre uma opção valida\v");
                lb;
                getchar();
                 break;
            }//switch case    

        
} //fim do while
}//cliente