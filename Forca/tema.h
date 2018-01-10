char* tema(int *op)
{

printf("Escolha um tema:\n");
printf("01 - Astronomia \n");
printf("02 - Fruta \n");
printf("03 - Cidade \n");
printf("04 - País\n");
printf("05 - Profissão\n");
scanf ("%d",op);
if(*op==1)
{
return "Astronomia";

}
 
if(*op==2)
{
return "Fruta";

}
 
if(*op==3)
{
return "Cidade";

}

 
if(*op==4)
{
return "País";

}

 
if(*op==5)
{
return "Profissão";

}


}
