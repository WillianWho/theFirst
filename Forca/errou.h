 int naoAchou( int chance, int n,char palavraAux[], char letra)
{
	
                     
                    printf("Chances: %d/6\nA palavra não possui a letra %c\n", chance, letra);
                    if(chance==5){
					
                    printf(" __________ \n");
					printf("|    O     |\n");
					printf("|          |\n");
					printf("|          |\n");
					printf("|__________|\n");
                lb;     
getchar();
lt;
                      
				}

					if(chance==4){
					printf(" __________ \n");
                    printf("|    O     |\n");
					printf("|    |     |\n");
					printf("|          |\n");
					printf("|__________|\n");
lb;     
getchar();

lt;
				}
				if(chance==3){
					printf(" __________ \n");
                    printf("|    O     |\n");
					printf("|   /|     |\n");
					printf("|          |\n");
					printf("|__________|\n");
lb;     
            getchar();
lt;
    }

                if(chance==2){
                	printf(" __________ \n");
                	printf("|    O     |\n");
					printf("|   /|\\    |\n"); 
					printf("|          |\n");
					printf("|__________|\n");
lb;     
getchar();				
lt;
}
				if(chance==1){
					printf(" __________ \n");
					printf("|    O     |\n");
					printf("|   /|\\    |\n");
					printf("|   /      |\n");
					printf("|__________|\n");
lb;     
getchar();
lt;
				}
				if(chance==0){
					printf(" __________ \n");
					printf("|    O     |\n");
					printf("|   /|\\    |\n");
					printf("|   / \\    |\n");
					printf("|__________|\n");
					lb;
					printf("Você Perdeu!\nPalavra:%s\n", palavraAux);
					n=1000;
				return n;
				}
                 return n;  
}
