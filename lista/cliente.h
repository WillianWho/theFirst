int Clientes()
{
/*Declaração de variável*/
    
    unsigned int op=0;
    cliente pCliente[100];
    int contCli=0;
    
    while(op!=4)
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
                case 3:
                buscaCli(pCliente,contCli);
                break;
                default: op==4?/**/: puts("\033[41m \033[30merro! Entre uma opção válida\033[40m");
                lb;
                getchar();
                 break;
            }//switch case    

        
} //fim do while
}//cliente