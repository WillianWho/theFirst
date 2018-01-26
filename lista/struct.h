typedef struct
{
    char log[80];
    unsigned int casaNum;
    char rua[80];
    unsigned int cep;
}tEndereco;

typedef struct
{
char nomeCli[100];
tEndereco end[100];
char telefoneCli [14];
}cliente;

typedef struct
{
char nome[100];
tEndereco end [100];
char telefone [14];
}funci;
