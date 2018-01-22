void menu (int *op)
{
lt;
printf("\033[32m"); //cor da fonte verde
printf("\tMENU\n");
printf("\tInserir\t-\t1\n");
printf("\tListar\t-\t2 \n");
printf("\tBuscar\t-\t3 \n");
printf("\tSair\t-\t4 \n");
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
