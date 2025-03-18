#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Desafio Super Trunfo - Países

/*
    Curso ADS - Introdução à Programação de Computadores
    Tema 2 - Super Trunfo em C: Desenvolvendo a Lógica do Jogo
    Exercício: Desafio Nível Mestre - Implementando Comparações Avançadas com Atributos Múltiplos em C
    Data: 17 de Março de 2025
    Aluno: Ednilson Graciano dos Santos
    Matrícula: 202503249997 
    Versão: 0.6.0v
*/

void regrasdojogo() {   
    printf("\n----> Regras do Jogo <----\n\n");
    printf("Pontuação:\n");
    printf("Vence quem tem o maior atributo, exeto densidade demográfica.\n");    
    printf("Exemplos:\n");
    printf("População Carta 1 > População Carta 2, quem tiver o valor maior vence.\n");
    printf("Densidade Carta 1 < Densidade Carta 2 quem tiver o valor menor vence.\n");
    printf("\n* Se os dois resultados forem 1 a carta 1 vence\n");
    printf("* Se os dois resultados forem 0 a carta 2 vence\n");
    printf("* E se os resultados forem diferentes 0 e 1 da empate\n"); 
    printf("* O exemplo ficaria assim:\n");
    printf("    --> se resultado1 = 1 && resultado2 = 1: carta 1 venceu. soma 2 ponto 1 para cada Atributo\n"); 
    printf("    --> se !resultado1 = 0 && !resultado2 = 0: carta 2 venceu. soma 2 ponto 1 para cada Atributo\n");
    printf("    --> se resultado1 = 1 && resultado2 = 0: Empate. soma 1 ponto para cada carta\n");        
    printf("    --> se resultado1 = 0 && resultado2 = 1: Empate. soma 1 ponto para cada carta\n\n");
} 

int main() {
    int carta1, turisticos1, populacao1,
        carta2, turisticos2, populacao2,
        resultado1, resultado2,
        rodada, vitoria1 = 0, vitoria2 = 0,
        empate1 = 0, empate2 = 0,
        pontuacaofinal1 = 0, pontuacaofinal2 = 0
    ;

    char atributo1, 
         atributo2
    ;

    char codigo1[10], 
         codigo2[10]
    ;

    char continuar[3], 
         estado1[3], 
         estado2[3]
    ;

    char cidade1[50], 
         cidade2[50]
    ;

    float area1, area2, pib1, pib2,
          densidade_pop1, densidade_pop2,
          pib_per_capita1, pib_per_capita2,
          super_poder_carta1 = 0, super_poder_carta2 = 0
    ;
    
    printf("Bem vindo ao Super Trunfo\n \n"); // Mensagem de boas vindas
    printf("Jogador 1, cadastre sua carta\n \n"); // Mensagem para o jogador cadastrar a sua carta 1

    // Recebendo os dados da carta 1
    printf("Digite o numero da carta: ");
    scanf("%d", &carta1);

    printf("Digite o codigo (01-08) da carta: ");
    scanf("%2s", codigo1); 

    printf("Digite o estado (A-H): ");
    scanf("%s", estado1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);  

    printf("Digite a Area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: R$ ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turisticos1);

    printf("\nCarta 1 cadastrada com sucesso!\n \n"); // Mensagem de cadastro com sucesso

    // Calculando a densidade populacional da carta 1,  se caso a area seja 0 retorna zero na densidade 
    densidade_pop1 = (area1 > 0) ? ((float)populacao1 / area1) : 0;
        
    // Calculando o PIB per capita da carta 1
    pib_per_capita1 = pib1 / (float)populacao1;

    // Exibindo os dados da carta 1
    printf("Dados da Carta %d do Jogador 1\n", carta1);
    printf("Codigo da Carta: %s%s\n", estado1, codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB R$ %.2f bilhões de reais\n", pib1);
    printf("Nº de Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop1);
    printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita1);

    // Após realizar calculo apresentou erro devido a densidade_pop1 ser igual a zero mudei corrigir 
    super_poder_carta1 = (float)populacao1 + area1 + pib1 + (float)turisticos1 + pib_per_capita1 + (densidade_pop1 > 0 ? (1 / densidade_pop1) : 0);
    printf("Super Poder da Carta %d: %.2f\n \n", carta1, super_poder_carta1);

    printf("Jogador 2, cadastre a sua carta\n \n"); // Mensagem para o jogador cadastrar a sua carta 2  

    // Recebendo os dados da carta 2
    printf("Digite o numero da carta: ");
    scanf("%d", &carta2);

    printf("Digite o codigo (01-08) da carta: ");
    scanf("%2s", codigo2);

    printf("Digite o estado (A-H): ");
    scanf("%s", estado2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: R$ ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turisticos2);

    printf("Carta 2 cadastrada com sucesso\n \n"); // Mensagem de cadastro com sucesso

    // Calculando a densidade populacional da carta 2, se caso a area seja 0 retorna zero na densidade
    densidade_pop2 = (area2 > 0) ? ((float)populacao2 / area2) : 0;

    // Calculando o PIB per capita da carta 2
    pib_per_capita2 = pib2 / (float)populacao2;

    // Exibindo os dados da carta 2
    printf("Dados da Carta %d do Jogador 2\n", carta2);
    printf("Codigo da Carta: %s%s\n", estado2, codigo2); 
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Nº de Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop2);
    printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita2);

    // Calculando o super poder da carta 2
    super_poder_carta2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + pib_per_capita2 + (densidade_pop2 > 0 ? (1 / densidade_pop2) : 0);
    printf("Super Poder da Carta %d: %.2f\n \n", carta2, super_poder_carta2);

    // Menu Interativo escolha de atributos
    printf("Menu Interativo\n");

    // Dar opção ao jogador de sair ou continuar
    srand(time(0)); // função srand inicia a semente do gerador com numeros aleatorios 
    
    while (1) { // Aqui garante que seja digitado somente 1 opção valida
        printf("Deseja continuar digit S/N: ");
        scanf("%1s", continuar); // %1s recebe um caracter para evitar erro
        continuar[0] = toupper(continuar[0]); // recebe e converte para maiúscula

        if (continuar[0] == 'S') {
            break;
        } else if (continuar[0] == 'N') { // nesse caso N encerra o jogo
                printf("\nFim do jogo! Obrigado por Jogar!");
                return 0; // Aqui encerra o jogo
        } else {
            printf("Opção Inválida. Tente novamente.\n");
        }
    } 
    for (rodada = 1; rodada <= 4; rodada++) { // Nesse caso foi adicionao uma nova Função (for), para criar o loop enguanto a rodada for menor que 4 o programa continua
        printf("\n### Rodada numero: %d ###\n", rodada); // vai exibir qual rodada esta no momento    
        printf("\nEscolha um Atributo para Atacar a Carta Adversaria\n"); // Mensagem para o jogador escolher um atributo para comparar as cartas
        printf("R - Consultar Regra do Jogo\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n \n");

        // Aqui e a verificação da escolha do jogador 1
        while (1){    
            printf("Jogador 1, digite a sua escolha: ");
            scanf(" %c", &atributo1); // Recebe a opção escolhida pelo jogador para o primeiro atributo
            if (atributo1 == 'R' || atributo1 == 'r') {
                regrasdojogo(); // Aqui chama o void para exibir as regras do jogo
                continue; // Repete a rodada
            } else if (atributo1 >= '1' && atributo1 <= '7') {
                break; // Opção válida, sai do loop e continua
            } else{                
                printf("Opção Inválida! Escolha um número entre 1 e 7.\n");
                // Opção inválida, repete a escolha
            }
        }
        // Aqui a carta 1 recebe (1 verdadeiro) e a carta dois recebe (0 falso) para cada atributo1
        switch (atributo1) { 
            case '1':
                printf("Você escolheu População\n");
                resultado1 = populacao1 > populacao2 ? 1 : 0;
                break;
            case '2':
                printf("Você escolheu Área\n");
                resultado1 = area1 > area2 ? 1 : 0;  
                break;
            case '3':
                printf("Você escolheu PIB\n");
                resultado1 = pib1 > pib2 ? 1 : 0; 
                break;
            case '4':
                printf("Você escolheu Número de Pontos Turísticos\n");
                resultado1 = turisticos1 > turisticos2 ? 1 : 0;
                break;
            case '5':
                printf("Você escolheu Densidade Populacional\n");
                resultado1 = densidade_pop1 < densidade_pop2 ? 1 : 0; 
                break;
            case '6':
                printf("Você escolheu PIB per Capita\n");
                resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
                break;
            case '7':
                printf("Você escolheu Super Poder\n");
                resultado1 = super_poder_carta1 > super_poder_carta2 ? 1 : 0;
                break;
            default:
                printf("Opção Inválida\n");
                break;
        }

        // Aqui verifica a escolha do jogador 2  se ela é igual ou diferente
        while (1) {
            printf("Jogador 2, digite a sua escolha: ");
            scanf(" %c", &atributo2); // Recebe a opção escolhida pelo jogador para o segundo atributo
            
            if (atributo2 == 'R' || atributo2 == 'r') {
                regrasdojogo();
                continue;
            } else if (atributo2 >= '1' || atributo2 <= '7') {       
                if (atributo1 == atributo2) { // aqui vai comparar se os atributos escolhido são iguais
                    printf("Os dois atributos escolhidos são iguais\n");           
                    printf("Escolha um atributos diferentes\n");
                    continue; // Aqui volta e repete a escolha do jogador 2
                }
                break; // Aqui a escolha é válida, sai do loop e continua
            } else {                
                printf("Opção Inválida! Escolha um número entre 1 e 7.\n");
            }
             
        }
        switch (atributo2) {
            case '1':
                printf("Você escolheu População\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case '2':
                printf("Você escolheu Área\n");
                resultado2 = area1 > area2 ? 1 : 0;   
                break;
            case '3':
                printf("Você escolheu PIB\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;
            case '4':
                printf("Você escolheu Número de Pontos Turísticos\n");
                resultado2 = turisticos1 > turisticos2 ? 1 : 0;
                break;
            case '5':
                printf("Você escolheu Densidade Populacional\n");
                resultado2 = densidade_pop1 < densidade_pop2 ? 1 : 0;
                break;
            case '6':
                printf("Você escolheu PIB per Capita\n");
                resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0; 
                break;
            case '7':
                printf("Você escolheu Super Poder\n");
                resultado2 = super_poder_carta1 > super_poder_carta2 ? 1 : 0;
                break;
            default:
                printf("Opção Inválida\n");
                break;
        }
          
        // Agora exibe o resultado da rodada
        printf("\n### Resultado da Rodada numero: %d ###\n \n", rodada);
        if (resultado1 && resultado2) { // verifica se ambas são verdadeiras, aqui carta 1 venceu em ambas as comparações, 
            printf("Carta %d venceu a comparação dos atributos na rodada: %d\n", carta1, rodada);
            printf("Nome da Cidade: %s\n", cidade1);
            printf("Atributo Escolhido: %c - Valor: %d - Consulte a regra do jogo.\n", atributo1, resultado1);
            printf("Atributo Escolhido: %c - Valor: %d - Consulte a regra do jogo.\n", atributo2, resultado2);
            pontuacaofinal1 += 2; // Aqui a pontuação final é incrementada somando os pontos da rodada para a carta 1
            vitoria1++;
            printf("Carta %d Ganha 2 Pontos nessa Rodada!\n", carta1);
            printf("Pontuação Total Carta 1: %d\n", pontuacaofinal1);
            printf("Pontuação Total Carta 2: %d\n", pontuacaofinal2);
        } else if (!resultado1 && !resultado2) { // verifica se ambas são falsas, aqui carta 2 venceu em ambas as comparações          
            printf("Carta %d venceu a comparação dos atributos na rodada: %d\n", carta2, rodada);
            printf("Nome da Cidade: %s\n", cidade2);
            printf("Atributo Escolhido: %c - Valor: %d - Consulte a regra do jogo.\n", atributo1, resultado1);
            printf("Atributo Escolhido: %c - Valor: %d - Consulte a regra do jogo.\n", atributo2, resultado2);
            pontuacaofinal2 += 2; // Aqui a pontuação final é incrementada somando os pontos da rodada para a carta 2
            vitoria2++;
            printf("Carta %d Ganha 2 Pontos nessa Rodada!\n", carta2);
            printf("Pontuação Total Carta 1: %d\n", pontuacaofinal1);
            printf("Pontuação Total Carta 2: %d\n", pontuacaofinal2);
        } else {
            printf("---> Temos um empate na rodada: %d <---\n \n",rodada);
            printf("Nome da Cidade: %s, e Nome da Cidade: %s\n", cidade1, cidade2);
            printf("Atributo Escolhido: %c - Valor: %d - Consulte a regra do jogo.\n", atributo1, resultado1);            
            printf("Atributo Escolhido: %c - Valor: %d - Consulte a regra do jogo.\n", atributo2, resultado2);
            pontuacaofinal1 += 1; // Aqui a pontuação final é incrementada somando os pontos da rodada para a carta 1
            pontuacaofinal2 += 1; // Aqui a pontuação final é incrementada somando os pontos da rodada para a carta 2
            empate1++;
            empate2++;

            printf("\nPara empate 1 ponto para cada carta nessa rodada, consulte a regra do jogo!\n \n");
            printf("Pontuação Total Carta 1: %d\n", pontuacaofinal1);
            printf("Pontuação Total Carta 2: %d\n", pontuacaofinal2);
        }

        // Continuar ou sair
        if (rodada < 4) {  // Aqui se a rodada for menor que 4 o jogo continua    
            // Dar opção para o jogador continuar ou sair
            while (1) {
                printf("\nDeseja continuar? (S/N): ");
                scanf("%1s", continuar);
                
                // Aqui usei o strcmp pra mostra outra forma para facilitar a comparação pode entrar com maiúscula ou minúscula
                if (strcmp(continuar, "S") == 0 || strcmp(continuar, "s") == 0) {
                    break; // Aqui continua o jogo
                } else if (strcmp(continuar, "N") == 0 || strcmp(continuar, "n") == 0) { // nesse caso N encerra o jogo
                    printf("\nFim do jogo! Obrigado por Jogar!");
                    return 0; // Aqui encerra o jogo
                } else {
                    printf("Opção Inválida. Tente novamente.\n");
                    // Aqui volta e repete a pernunta
                }
            }            
        }
    }

    // Mensagem de Encerrando Jogo
    if (rodada >= 4){ // Aqui se a rodada for maior que 4 o jogo chega ao fim
        printf("\nAs 4 rodadas foram concluidas.\n");
        if (pontuacaofinal1 > pontuacaofinal2) {
            printf("A Carta 1 venceu, com %d vitórias e %d empates\n", vitoria1, empate1);
            printf("Total de Pontos por Atributo: %d pontos\n", pontuacaofinal1);
        } else if (pontuacaofinal2 > pontuacaofinal1) {
            printf("A Carta 2 venceu, com %d vitórias e %d empates\n", vitoria2, empate2);
            printf("Total de Pontos por Atributo: %d pontos\n", pontuacaofinal2);
        } else {
            printf("O jogo terminou em empate!\n");
            printf("Carta 1 com %d vitórias e %d empates\n", vitoria1, empate1);
            printf("Carta 2 com %d vitórias e %d empates\n", vitoria2, empate2);
        }
        printf("\nFim do jogo! Obrigado por Jogar!");
    } else {    
        printf("\nFim do jogo! Obrigado por Jogar!");
    }

    return 0;
}