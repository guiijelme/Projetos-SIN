    /*****************************************************************************************************
    -->  Codigo-fonte "MEMOD.A"
    -->  Jogo da memoria com a tematica "Curso de Sistemas de Informação na UNIFEI", 
    onde você se passará por um calouro(a) de Sistemas de Informação, na Universidade Federal de Itajubá
    E para se enturmar, você decidiu fazer as provas temáticas das matérias do seu primeiro semestre, essas matérias serão:
        - Projeto Integrado (SAHC04)
        - Administração Aplicada (IEPG22)
        - Fundamentos de Sistemas de Informação (SAHC05)
    Porém, você quer ir para o famoso D.A, o Bar Cultural da Unifei, e seu ânimo para ir a festa dependerá do resultado dessas provas!
    --> Desenvolvido durante o curso de "XDES01 - Fundamentos de Programação", na Unifei, no semestre 2022.1, que tem por objetivo
    o desenvolvimento de um jogo para o teste dos conhecimentos básicos da linguagem C, como printar mensagens, estruturas condicionais, laços de repetiçao, etc.
    --> Ultima Atualização: 19/07/2022

    *****************************************************************************************************/

    // Declaração das Bibliotecas do Sistema
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

    // Protótipo das Funções
    void menu ();
    void creditos ();
    void jogar ();
    void fase1 ();
    void fase2();
    void fase3 ();
    void telafinal();
    void tela_final (int acertos, int erros);

    /*************************

        Função Principal
        Parametros: Nenhum
        Retorno: Inteiro

    *************************/
int main (void){

    //Título do programa
    SetConsoleTitle("memoD.A - As noites de provas para o Bar Cultural");

    // Declaração da variável de entrada da opção do menu
    int r, s, acertos = 0, erros = 0;

    //Laço de repetiçao que impede que o usuário feche o programa sem que  ele tenha digitado a opção de sair
    while ((r < 1) || ( r  > 2)) {

    // Interface do menu
    menu ();

    // Escaneamento do dado de entrada da opção do menu
    scanf ("%d", &r);

    /***************************************************************

    Estrutura condicional "switch" para a escolha do menu.

        . Caso o usuário digite (1), o jogo ira iniciar.
        . Caso o usuário digite (2), o jogo irá fechar

     **************************************************************/
    switch (r){

    case 1:
    system ("cls");
    fase1();
    fase2();
    fase3();
    telafinal();
    break;

    case 2:
    break;


    // caso o usuário digite alguma opção que não seja valida, o jogo printara "Opção Inválida!
    default:
        system ("cls");
        printf ("\n");
        printf ("                                                     Opcao Invalida!                                                    \n\n");
        break;

    return 0;

            }
        }
    }

// Função da Interface do Menu
void menu (){
    printf ("------------------------------------------------------------------------------------------------------------------------");
    printf ("\n\n                                    ||---------------------------------------------||");
    printf ("\n\                                    ||                   memoD.A                   ||");
    printf ("\n                                    ||   A noite de provas para o Bar Cultural     ||\n");
    printf ("                                    ||---------------------------------------------||\n\n" );
    printf ("                                         ||-----------------------------------|| ");
    printf ("\n                                         || Digite uma opcao para prosseguir  ||                          ");
    printf ("                                                       ||-----------------------------------|| \n");
    printf ("         ||---------------------||    \n");
    printf ("                                                     \n            (1) Jogar\n");
    printf ("                                                    \n            (2) Sair\n");
    printf ("         ||---------------------||  \n");
    printf ("                                       \n     || Opcao: ");}

// Função da primeira fase, prova de Projeto Integrado
void fase1 () {

   // Declaração dos vetores para os números aleatórios das alternativas e as respostas dos jogadores
    int respostasp1[3], numerosc[3], numerosf[3];


    // Declaração das variáveis do tempo de cada questão. Na prova de Projeto Integrado, o jogador irá possuir apenas 6 segundos por questão para decorar os números
    int t1 = 6, t2 = 6, t3 = 6;

    //Variável contadora dos acertos
    int acertos = 0;
    int erros = 0;

     // Seção de diálago para introduzir o jogador a temáticado jogo
     // Para a transiçao dos diálogos o sistema espera 3 segundos e depois limpa o terminal
     printf ("------------------------------------------------------------------------------------------------------------------------");
    printf ("\n\n\n\n\n\n\n\n\n\n                                                       SAIU!!!\n");
    printf ("                                                  FINALMENTE SAIU!!!\n");
    printf ("                                             BENDITO SEJA NOSSO SALVADOR!!!\n\n\n\n\n");

    Sleep (3000);
    system ("cls");

    printf ("\n\n\n------------------------------------------------------------------------------------------------------------------------");
    printf ("\n\n        || O resultado do SISU finalmente saiu, e parabens, voce acabou de ser aprovado em Sistemas de Informacao\n na Universidade Federal de Itajuba! ||\n"); // Tentar mais tarde implementar a ideia da variavel do nome
    printf ("------------------------------------------------------------------------------------------------------------------------\n");
    printf ("\n\n\n  ");

    Sleep (4000);
    system ("cls");

    printf ("\n\n\n------------------------------------------------------------------------------------------------------------------------");
    printf ("\n\n        || Hora de fazer suas malas, e ir para Itajuba... ||\n");
    printf ("------------------------------------------------------------------------------------------------------------------------\n");

    Sleep (4000);

    system ("cls");
    printf ("\n\n\n------------------------------------------------------------------------------------------------------------------------");
    printf ("\n\n        || Chegando na Universidade, voce conhece novas pessoas e uma nova casa para chamar de sua, mas existe algo que voce quer mais que tudo... o D.A no sabado ||\n");
    printf ("------------------------------------------------------------------------------------------------------------------------\n");

    Sleep (5000);
    system ("cls");

    printf ("\n\n\n------------------------------------------------------------------------------------------------------------------------");
    printf ("\n\n        || Mas para ir para o seu primeiro D.A, voce primeiro precisa fazer as provas da semana ||\n");
    printf ("            || Quarta-feira: Prova de Projeto Integrado\n");
    printf ("            || Quinta-feira: Prova de Adminitracao Aplicada\n");
    printf ("            || Sexta-feira: Prova de Fundamentos de Sistemas de Informacao\n");
    printf ("------------------------------------------------------------------------------------------------------------------------\n");
    printf ("\n\n        || Para acertar as questoes, decorre o numero da alternativa correta, as questoes irao\n ter somente uma alternativa correta\n");
    printf ("\n\n        || Pressione qualquer tecla para progredir para a primeira prova");

    //Comando para prosseguir somente quando o jogador digitar alguma tecla
    getch();

    //Comando para limpar o terminal
    system ("cls");

    //Função da bibliotea time.h para gerar números aleatórios, com a seed dessa função sendo o horário atual do PC do usuário
    int i;

    srand (time(NULL));

    //Laço de repetição para preencher os vetores de números corretos e falsos com números aleatório de 1 a 30
    for(i = 0; i < 3; i++){
        numerosc[i] = rand () % 30;
        numerosf[i] = rand () % 30;
    }

    //Laço de repetição para o temporizador da questão 01 + a interface da questão
    do
    {
        system ("cls");
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE PROJETO INTEGRADO");
        printf ("\n\n      || QUESTAO 01");
        printf ("\n\n\n             Qual e o codigo correto da materia fundamentos de programacao?");
        printf ("\n\n       (%d) -> XDES01                                            (%d) -> XAHC03", numerosc[0], numerosf [0]);
        printf ("\n\n    || Tempo restante: %d", t1);
        Sleep (1000);
        t1--;
    } while (t1 > 0);

    //Comando para limpar o terminal
    system ("cls");

    //Interface para o usuário digitar sua reposta

        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE PROJETO INTEGRADO");
        printf ("\n\n      || QUESTAO 01");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp1[0]);
        if (respostasp1[0] == numerosc[0]){
            acertos++;
        } else {
        erros ++;
        }


        //Estrutural condicional para averiguar se o jogador acertou ou errou a questão


        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");

     //Laço de repetição para o temporizador da questão 2
        do {
        system ("cls");
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n     || PROVA DE PROJETO INTEGRADO");
        printf ("\n\n     || QUESTAO 2");
        printf ("\n\n\n            O PPC de 2022 de Sistemas de Informacao na Unifei tem o estagio como obrigatorio");
        printf ("\n\n       (%d)-> Verdadeiro                                                             (%d)-> Falso", numerosf[1], numerosc[1]);
        printf ("\n\n   || Tempo restante: %d", t2);
        Sleep (1000);
        t2--;
        }
        while (t2 > 0);

        system ("cls");

        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE PROJETO INTEGRADO");
        printf ("\n\n      || QUESTAO 02");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp1[1]);
        if (respostasp1[1] == numerosc[1]){
            acertos++;
        } else {
        erros ++;
        }


        //Estrutural condicional para averiguar se o jogador acertou ou errou a questão

        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");

        // Laço de repetição para o temporizador da questão 03
        do {
        system ("cls");
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n     || PROVA DE PROJETO INTEGRADO");
        printf ("\n\n     || QUESTAO 3");
        printf ("\n\n\n         Em qual instituto esta localizado o curso de Sistemas de Informacao na Unifei?");
        printf ("\n\n      (%d) -> IMC                                                                  (%d)-> IEPG", numerosc[2], numerosf[2]);
        printf ("\n\n  || Tempo restante: %d", t3);
        Sleep (1000);
        t3--;
        } while (t3 > 0);

        system ("cls");

        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE PROJETO INTEGRADO");
        printf ("\n\n      || QUESTAO 03");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp1[2]);

        if (respostasp1[2] == numerosc[2]){
            acertos++;
        } else {
        erros ++;
        }

        //Estrutural condicional para averiguar se o jogador acertou ou errou a questão
        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n\n\n\n\n\n                         Fim de prova!\n");
        system ("cls");
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n\n\n\n\n\n\n\n\n\n                                                Voce termina a prova\n");
        printf ("                           Cansado, voce volta para casa para descansar para o proximo dia\n\n\n\n\n\n");
        printf ("         || Pressione qualquer tecla para avancar para a proxima prova");
        getch ();
        system ("cls");
        tela_final(acertos, erros);
    }

    // Função da segunda fase, prova de Adm. Aplicada
    void fase2 () {

    // Declaração das variáveis do tempo de cada questão. Na prova de Administração Aplicada, o jogador irá possuir apenas 5 segundos por questão para decorar os números
    int t1 = 5, t2 = 5, t3 = 5;
        // Declaração dos vetores de respostas da segunda prova, números aleatórios das alternativas corretas, números aleatórios das alternativas falsas
        int respostasp2[3], numerosc[3], numerosf[6];

        int i;
        int acertos = 0;
        int erros = 0;

        //Função da bibliotea time.h para gerar números aleatórios, com a seed dessa função sendo o horário atual do PC do usuário
        srand (time(NULL));
    //Laços de repetição para preencher os vetores de números corretos e falsos com números aleatório de 1 a 60
    for(i = 0; i < 3; i++){
        numerosc[i] = rand () % 60;
    }

    for (i = 0; i < 6; i++){
        numerosf[i] = rand () % 60;
    }
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n\n\n\n\n\n\n                                         PROVA DE ADMINISTRACAO APLICADA");
        Sleep (3000);
        system ("cls");

        //Laço de repetição para o temporizador da questao 01
        do {
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE ADMINISTRACAO APLICADA");
        printf ("\n\n      || QUESTAO 01");
        printf ("\n\n\n         A disciplina de Administracao Aplicada esta associada a que area de conhecimento?");
        printf ("\n\n       (%d) -> Administracao e Gestao\n         \n       (%d) -> Aspectos Humanos em Computacao\n       \n       (%d) -> Persistencia e Analise de Dados", numerosc[0], numerosf[0], numerosf[1]);
        printf ("\n\n\n      || Tempo restante: %d", t1);
        Sleep (1000);
        t1--;
        system ("cls");
        } while (t1 > 0);
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE ADMINISTRAAO APLICADA");
        printf ("\n\n      || QUESTAO 01");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp2[0]);
        
        //Estrutural condicional para averiguar se o jogador acertou ou errou a questão
        if (respostasp2[0] == numerosc[0]){
            acertos++;
        } else {
        erros ++;
        }
        
        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");

        // Laço de repetição para o temporizador da questão 02
        do {
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE ADMINISTRACAO APLICADA");
        printf ("\n\n      || QUESTAO 02");
        printf ("\n\n\n         A disciplina de Administracao Aplicada ou Introducao a Administracao e pre-requisito para");
        printf ("\n\n       (%d) -> Comportamento Organizacional\n         \n       (%d) -> Gestao e Governanca de TI\n       \n       (%d) -> Bancos de dados I ", numerosf[2], numerosc[1], numerosf[3]);
        printf ("\n\n\n      || Tempo restante: %d", t2);
        Sleep (1000);
        t2--;
        system ("cls");
        } while (t2 > 0);
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE ADMINISTRAAO APLICADA");
        printf ("\n\n      || QUESTAO 02");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp2[1]);

        //Estrutural condicional para averiguar se o jogador acertou ou errou a questão

        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");
        if (respostasp2[1] == numerosc[1]){
            acertos++;
        } else {
        erros ++;
        }

        // Laço de repetição para o temporizador da questão 03
        do {
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE ADMINISTRACAO APLICADA");
        printf ("\n\n      || QUESTAO 03");
        printf ("\n\n\n         Qual e o codigo correto da materia de Administracao Aplicada?");
        printf ("\n\n       (%d) -> IEPG01\n         \n       (%d) -> IEPG15\n       \n       (%d) -> IEPG22 ", numerosf[4], numerosf[5], numerosc[2] );
        printf ("\n\n\n      || Tempo restante: %d", t3);
        Sleep (1000);
        t3--;
        system ("cls");
        } while (t3 > 0);
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE ADMINISTRACAO APLICADA");
        printf ("\n\n      || QUESTAO 03");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp2[2]);
          //Estrutural condicional para averiguar se o jogador acertou ou errou a questão
          if (respostasp2[2] == numerosc[2]){
            acertos++;
        } else {
        erros ++;
        }

        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n\n\n\n\n\n                         Fim de Prova!\n");
        system ("cls");
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n\n\n\n\n\n\n\n\n\n                                                Voce termina a prova\n");
        printf ("                           Cansado, voce volta para casa para descansar para o proximo dia\n\n\n\n\n\n");
        printf ("         || Pressione qualquer tecla para avancar para a proxima prova");
        getch ();
        system ("cls");
        tela_final(acertos, erros);
    }

    // Função da terceira fase, prova de Fund. de Sistemas de Informação
    void fase3() {

        // Declaração das variáveis do tempo de cada questão. Na prova de Fund. de Sistemas de Informação, o jogador irá possuir apenas 4 segundos por questão para decorar os números
        int t1 = 4, t2 = 4, t3 = 4;
        int acertos = 0;
        int erros = 0;

        /* Declaração dos vetores de respostas do jogador para a terceira prova,
         números aleatórios das alternativas corretas e números aleatórios das alternativas falsas*/
        int respostasp3[3], numerosc[3], numerosf[9];

        //Declaração da variável contadora para preenchimento dos vetores
        int i;

        // Função da bibliotea time.h para gerar números aleatórios, com a seed dessa função sendo o horário atual do PC do usuário
        srand (time(NULL));

    // Laços de repetição para preencher os vetores de números corretos e falsos com números aleatório de 1 a 100
    for(i = 0; i < 3; i++){
        numerosc[i] = rand () % 100;
    }

    for (i = 0; i < 9; i++){
        numerosf[i] = rand () % 100;
    }
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n\n\n\n\n\n\n                                      PROVA DE FUNDAMENTOS DE SISTEMAS DE INFORMACAO");
        Sleep (3000);
        system ("cls");

        // Laço de repetição para o temporizador da questao 01
        do {
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE FUNDAMENTOS DE SISTEMAS DE INFORMACAO");
        printf ("\n\n      || QUESTAO 01");
        printf ("\n\n\n         A disciplina de Fundamentos de Sistemas de Informacao esta associada a qual area de conhecimento?");
        printf ("\n\n       (%d) -> Administracao e Gestao\n         \n       (%d) -> Redes e Sistemas Computacionais\n       \n       (%d) -> Teoria da Computacao\n       \n       (%d) -> Persistencia e Analise de Dados", numerosf[0], numerosc[0], numerosf[1], numerosf[2]);
        printf ("\n\n\n      || Tempo restante: %d", t1);
        Sleep (1000);
        t1--;
        system ("cls");
        } while (t1 > 0);
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE FUNDAMENTOS DE SISTEMAS DE INFORMACAO");
        printf ("\n\n      || QUESTAO 01");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp3[0]);

          //Estrutural condicional para averiguar se o jogador acertou ou errou a questão


        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");
        if (respostasp3[0] == numerosc[0]){
            acertos++;
        } else {
        erros ++;
        }

        // Laço de repetição para o temporizador da questão 02
        do {
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE FUNDAMENTOS DE SISTEMAS DE INFORMACAO");
        printf ("\n\n      || QUESTAO 02");
        printf ("\n\n\n         A disciplina de Fundamentos de Sistemas de Informacao e pre-requisito para");
        printf ("\n\n       (%d) -> Gestao de Carreira\n         \n       (%d) -> Computacao e Sociedade\n       \n       (%d) -> Metodologia Cientifica\n       \n       (%d) -> Nenhuma Disciplica ", numerosf[3], numerosf[4], numerosf[5], numerosc[1]);
        printf ("\n\n\n      || Tempo restante: %d", t2);
        Sleep (1000);
        t2--;
        system ("cls");
        } while (t2 > 0);
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE FUNDAMENTOS DE SISTEMAS DE INFORMACAO");
        printf ("\n\n      || QUESTAO 02");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp3[1]);

          //Estrutural condicional para averiguar se o jogador acertou ou errou a questão
          if (respostasp3[1] == numerosc[1]){
            acertos++;
        } else {
        erros ++;
        }


        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");

        // Laço de repetiçao para o temporizador da questão 03
        do {
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE FUNDAMENTOS DE SISTEMAS DE INFORMACAO");
        printf ("\n\n      || QUESTAO 03");
        printf ("\n\n\n         O curso de Sistemas de Informacao pode ser classificado como um sistema");
        printf ("\n\n       (%d) -> Mecanismo de Controle\n         \n       (%d) -> Humano\n       \n       (%d) -> Sistema Socio-cultural\n       \n       (%d) -> Sistema Simbolico ", numerosf[6], numerosf[7], numerosf[8], numerosc[2] );
        printf ("\n\n\n      || Tempo restante: %d", t3);
        Sleep (1000);
        t3--;
        system ("cls");
        } while (t3 > 0);
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n      || PROVA DE FUNDAMENTOS DE SISTEMAS DE INFORMACAO");
        printf ("\n\n      || QUESTAO 03");
        printf ("\n\n\n                                 Digite o numero da alternativa correta");
        printf ("\n\n\n                                                   ");
        scanf ("%d", &respostasp3[2]);

          //Estrutural condicional para averiguar se o jogador acertou ou errou a questão

          if (respostasp3[2] == numerosc[2]){
            acertos++;
        } else {
        erros ++;
        }


        printf ("\n\n      || Pressione qualquer tecla para continuar");
        getch ();
        system ("cls");
        tela_final(acertos, erros);
    }

    //Função para printar a tela final do jogo com seu número de acertos e erros + a tela de créditos
    void telafinal(){

            printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n\n\n           Parabens! Voce conseguiu chegar ate o desejado sabado, o D.A finalmente esta ao seu alcance!\n");
        printf ("\n\n          || Sua pontuacao:");
        printf ("\n\n     || Acertos:");
        printf ("\n     || Erros:    ");
        Sleep (3000);
        printf ("\n\n  || Preesione qualquer tecla para continuar");
        getch();
        system ("cls");
        printf ("------------------------------------------------------------------------------------------------------------------------");
        printf ("\n\n\n                                                   Desenvolvedores\n\n");
        printf ("                                     Guilherme Cezar de Souza      2022006612\n");
        printf ("                                     Sabrina Barroso Dawid Baroza  2022011603 ");
        printf ("\n                                     Natalia Mateus da Luz         2022015068\n\n\n\n");
        printf ("                                    Muito obrigado por jogar nosso jogo! :)");
        printf ("\n\n\n\n\n\n\n\n\n\n\n------------------------------------------------------------------------------------------------------------------------");

    }

    void tela_final (int acertos, int erros){
        printf ("\n\n\n                                                Seu numero de acertos e erros");
        printf ("\n\n       || Acertos: %d", acertos);
        printf ("\n       || Erros: %d", erros);
        Sleep (4000);
        system ("cls");
    }
