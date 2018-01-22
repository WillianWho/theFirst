void menu (int *op)
{
lt;
printf("\033[32m"); //cor da fonte verde
printf("Inserir\t-\t1\n");
printf("Listar\t-\t2 \n");
printf("Sair\t-\t3 \n");
scanf("%d", op);
lt;
}

void menuPrincipal(int *op)
{
lt;

printf("\t\033[30m\033[41mMenu Principal\033[40m\n\v");

printf("\033[31m"); // fonte vermelha
printf("01\t-\tCliente\n");
printf("02\t-\tFuncionário\n");
printf("03\t-\tSair \n");
scanf("%d", op);
lt;
}
