char* escolherFruta ()
{
    int op=0;
    char p[100];
    M:
    printf("palavra número 1 \n");
    printf("palavra número 2 \n");
    printf("palavra número 3 \n");
    printf("palavra número 4 \n");
    printf("palavra número 5\n");
    scanf("%d", &op);
    
    switch (op)
        {
        lt;
        case 1:
        return "abacaxi";
        break;
        case 2: 
        return "amora";
        break;
        case 3:
        return "banana";
        break;
        case 4:
        return "melancia";
        break;
        case 5:
        return "laranja";
        break;
        default: 
        lt;
        puts("Número Inválido\n");
        goto M;
        break;
        }//Fim do switch 
    }//Fim da função

char* escolherAstronomia ()
{
int op=0;
char p[100];
M:
printf("palavra número 1 \n");
printf("palavra número 2 \n");
printf("palavra número 3 \n");
printf("palavra número 4 \n");
printf("palavra número 5\n");

scanf("%d", &op);
switch (op)
{
lt;
case 1:
return "venus";
break;
case 2: 
return "terra";
break;
case 3:
return "marte";
break;
case 4:
return "saturno";
break;
case 5:
return "betelgeuse";
break;
        default: 
        lt;
        puts("Número Inválido\n");
        goto M;
        break;
}//Fim do switch 

}//Fim da função



char* escolherCidade ()
{
int op=0;
char p[100];
M:
printf("palavra número 1 \n");
printf("palavra número 2 \n");
printf("palavra número 3 \n");
printf("palavra número 4 \n");
printf("palavra número 5\n");

scanf("%d", &op);
switch (op)
{
lt;
case 1:
return "londres";
break;
case 2: 
return "cardiff";
break;
case 3:
return "stalingrado";
break;
case 4:
return "olimpia";
break;
case 5:
return "athena";
break;
        default: 
        lt;
        puts("Número Inválido\n");
        goto M;
        break;
}//Fim do switch 

}//Fim da função



char* escolherPais ()
{
int op=0;
char p[100];
M:
printf("palavra número 1 \n");
printf("palavra número 2 \n");
printf("palavra número 3 \n");
printf("palavra número 4 \n");
printf("palavra número 5\n");

scanf("%d", &op);
switch (op)
{
lt;
case 1:
return "inglaterra";
break;
case 2: 
return "dinamarca";
break;
case 3:
return "brasil";
break;
case 4:
return "portugal";
break;
case 5:
return "india";
break;
        default: 
        lt;
        puts("Número Inválido\n");
        goto M;
        break;
}//Fim do switch 

}//Fim da função


char* escolherProfissao()
{
int op=0;
char p[100];
M:
printf("palavra número 1 \n");
printf("palavra número 2 \n");
printf("palavra número 3 \n");
printf("palavra número 4 \n");
printf("palavra número 5\n");

scanf("%d", &op);
switch (op)
{
lt;
case 1:
return "enfermeira";
break;
case 2: 
return "bombeiro";
break;
case 3:
return "padeiro";
break;
case 4:
return "confeiteiro";
break;
case 5:
return "programador";
break;
        default: 
        lt;
        puts("Número Inválido\n");
        goto M;
        break;
}//Fim do switch 

}//Fim da função

void menuFinal (int *op)
{
    printf("Desja jogar novamente?\n");
    printf("01\tSim\n02\tNão\n");
    scanf("%d",op);
}//fim do menu
