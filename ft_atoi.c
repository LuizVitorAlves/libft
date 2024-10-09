//Converte uma string em numero inteiro
//Passo 1: Ignorar espaçoes e branco no inicio
//Passo 2: Verificar se é positivo oou negativo
//Passo 3: Converter a string em numero
//Passo 4: Retorna o resultado com o sinal

int atoi(const char *str)
{
    int sign = 1;
    long result = 0;
    int i = 0;

    while (str[i] == ' ')
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return sign * result;
}
