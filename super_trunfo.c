#include <stdio.h>

int main(){
    #pragma region: //Variáveis da carta da cidade 1
        //Uma letra que reprente o Estado.
        char _estado1[1];

        //A letra do estado e um número de 01 a 04 para o código da carta.
        char _codigo1[03];

        //O nome da cidade, com no máximo 30 caracteres.
        char _cidade1[30];

        //Numero de habitantes da cidade e quantidade de pontos turísticos da cidade (Juntos por serem valores "INT", ou seja, valores inteiros).
        int _populacao1, _pontos_tur1;

        //Area da cidade (Valores "Float", ou seja, valores decimais)
        float _area1;
        
        //PIB (Produto Interno Bruto) da cidade
        char _PIB1[30];

    #pragma endregion

    #pragma region: //Variáveis da carta da cidade 2
        //Uma letra que reprente o outro Estado.
        char _estado2[1];

        //A letra do estado e um número de 01 a 04 para o código da carta.
        char _codigo2[03];

        //O nome da cidade, com no máximo 30 caracteres.
        char _cidade2[30];

        //Numero de habitantes da cidade e quantidade de pontos turísticos da cidade (Juntos por serem valores "INT").
        int _populacao2, _pontos_tur2;

        //Area da cidade (Valores "Float", ou seja, valores decimais)
        float _area2;
        
        //PIB (Produto Interno Bruto) da cidade
        char _PIB2[30];

    #pragma endregion

    //Mensagem de boas vindas usando a função "printf("")" para emitir mensagens no Terminal.
    printf("Bem vindo(a) ao Super Trunfo de Cidades! \nEscolha uma cidade e vamos criar a sua carta! \n");

    #pragma region: //Criação da carta 1
        //Receber as informações personalizadas dos usuários para criar as cartas.
        printf("\nPrimeiro, digite o nome da cidade espaçado por '_' (ex: Rio_Branco) com o seu teclado e aperte a tecla ENTER. \nEsse será o nome da sua carta: ");
        
        //Prompt para o usuário escrever usando seu teclado com a função "scanf("")".
        scanf("%s", _cidade1);

        //Letra que representa o Estado 1.
        printf("\nEscolha uma letra de 'A' até 'H'. Ela representará o Estado onde fica sua carta: ");
        scanf("%s", _estado1);

        //População da cidade 1.
        printf("\nQuantos habitantes tem nessa cidade (Não use pontos nem vírgulas)? ");
        //Valores de variáveis numéricas, precisam do caractere "&" antes dela.
        scanf("%d", &_populacao1);

        //Pontos turisticos da cidade 1.
        printf("\nQuantos pontos turísticos tem nessa cidade? ");
        scanf("%d", &_pontos_tur1);

        //Area da cidade 1.
        printf("\nQual a área em quilômetros quadrados dessa cidade? ");
        scanf("%f", &_area1);

        //Pontos turisticos da cidade 1.
        printf("\nQual o PIB (Produto Interno Bruto) dessa cidade? ");
        scanf("%s", _PIB1);

        //Criação do código da carta 1.
        printf("\nPor fim, junte a letra do Estado '%s' com um numero de 01 a 04 (ex: A01, D03). Esse será o código da sua carta: ", _estado1);
        scanf("%s", _codigo1);

        //Mensagem de sucesso.
        printf("\nParabéns! A carta %s foi criada com sucesso!\n", _cidade1);

        //Imprimir Carta1
        printf("\n- Carta %s - (%s)", _cidade1, _codigo1);
        printf("\nEstado - %s", _estado1);
        printf("\nPopulação - %d", _populacao1);
        printf("\nPontos Turísticos - %d", _pontos_tur1);
        printf("\nÁrea - %f", _area1);
        printf("\nPIB - %s\n", _PIB1);

    #pragma endregion

    printf("\nAgora, vamos agora criar sua segunda carta.\n");

    #pragma region //Criação da carta 2
        //Nome da cidade 2
        printf("\nDigite o nome de uma outra cidade: ");
        scanf("%s", _cidade2);

        //Letra que representa o Estado 2.
        printf("\nEscolha uma letra de 'A' até 'H'. Ela representará o Estado onde fica sua carta: ");
        scanf("%s", _estado2);

        //População da cidade 2.
        printf("\nQuantos habitantes tem nessa cidade? ");
        scanf("%d", &_populacao2);

        //Pontos turisticos da cidade 2.
        printf("\nQuantos pontos turísticos tem nessa cidade? ");
        scanf("%d", &_pontos_tur2);

        //Area da cidade 2.
        printf("\nQual a área em quilômetros quadrados dessa cidade? ");
        scanf("%f", &_area2);

        //Pontos turisticos da cidade 2.
        printf("\nQual o PIB (Produto Interno Bruto) dessa cidade? ");
        scanf("%s", _PIB2);

        //Criação do código da carta 2.
        printf("\nPor fim, junte a letra do Estado '%s' com um numero de 01 a 04 (ex: A01, D03). Esse será o código da sua carta: ", _estado2);
        scanf("%s", _codigo2);

        //Mensagem de sucesso.
        printf("\nParabéns! A carta %s foi criada com sucesso!\n", _cidade2);

        //Imprimir carta 2
        printf("\n- Carta %s - (%s)", _cidade2, _codigo2);
        printf("\nEstado - %s", _estado2);
        printf("\nPopulação - %d", _populacao2);
        printf("\nPontos Turísticos - %d", _pontos_tur2);
        printf("\nÁrea - %f", _area2);
        printf("\nPIB - %s\n", _PIB2);

    #pragma endregion

    //Por fim, verificar se a compilação foi bem sucedida.
    return 0;
}