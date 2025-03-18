### Desafio Super Trunfo - Países - Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo - Atualizado 17/03/2025

Tema 1 foi criado o cadastro e a exibição das cartas com a implementação da comparação das cartas e o calculo de super poder.
Tema 2 foi implementando a lógica do jogo - Comparações Avançadas com Atributos Múltiplos em C.

## 🎮 Desafio Final: Nível Mestre - Implementando Comparações Avançadas com Atributos Múltiplos em C

No Nível Mestre, foi implementará agora tudo o que foi aprendido e um pouco mais sobre estruturas de decisão em C para criar uma lógica de comparação ainda mais sofisticada. Esse novo código permiti que o jogador escolha dois atributos para comparar as cartas das cidades, implementado menus dinâmicos com switch e usará o operador ternário para tornar seu código mais elegante, e while e for pra loops de escolha de opções. Este desafio é a culminação dos desafios anteriores, onde foi cadastradas as cartas e implementado a comparação com um único atributo.

🚩 **Objetivo** Requisitos funcionais
⚙️ **Funcionalidades do Sistema:**
   *  Escolha de Dois Atributos: O sistema deve permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas, através de menus           interativos. Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.
   *  Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos. Para cada atributo, a regra            geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica, onde vence a carta com o menor valor.
   *  Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma          vence a rodada.
   *  Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".
   *  Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo, esse          atributo não deve mais aparecer como opção para a escolha do segundo atributo.
   *  Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:
   *  O nome das duas cidades.
   *  Os dois atributos usados na comparação.
   *  Os valores de cada atributo para cada carta.
   *  A soma dos atributos para cada carta.
   *  Qual carta venceu (ou se houve empate).

## 🛡️ Requisitos não funcionais
   *  Usabilidade: A interface do usuário é intuitiva e fácil de navegar, com mensagens claras e instruções para cada etapa.
   *  Performance: O sistema executa as comparações e exibir os resultados rapidamente. 
   *  Manutenibilidade: O código bem estruturado, organizado, com indentação consistente e comentários explicativos. Os nomes das variáveis são descritivas. 
   *  Confiabilidade: O sistema é robusto e lida com entradas inválidas do usuário de forma adequada, exibindo mensagens de erro apropriadas e evitando                     travamentos. Utilize o default no switch para tratar opções inválidas.
----------------------------------------------------------------------------------------
## Desafio Super Trunfo - Países - Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo - Atualizado 13/03/2025

Tema 1 foi criado o cadastro e a exibição das cartas com a implementação da comparação das cartas e o calculo de super poder.
Tema 2 será implementado e desenvolvido a logica do jogo.

## 🎮 Desafio: Nível Novato - Comparando Cartas do Super Trunfo

No Nível Novato, foi implementará a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico (como população, área, PIB, etc.). Este desafio é uma continuação do desafio do tema anterior, onde foi desenvolvido o cadastro das cartas e foi reaproveitado o código de cadastro de cartas que já foi desenvolvido. O foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.

🚩 **Objetivo**  Usar a estrutura de decisão para comparar as duas cartas com os adicionando novos atributos:
 
*   Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:
 
*   Densidade Populacional: População / Área
 
*   PIB per capita: PIB / População
 
⚙️ **Funcionalidades do Sistema:**

*   Comparar um atributo escolhido: foi implementado a comparação dos atributos um a um (População, Área, PIB, Pnto Turistico, Densidade Populacional, PIB per capita, Super Poder) para realizar a comparação entre as duas cartas, exibido a comparação e qual carta venceu. 
 
*   Determinado a carta vencedora:
 
*   Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
 
*   Para Densidade Populacional, a carta com o menor valor vence.

📥 **Entrada** e 📤 **Saída de Dados:**
 
*   Exibido o resultado final da comparação: O programa exibi, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado na comparação e os valores das duas cartas para aquele atributo.
Requisitos não funcionais

## 🛡️ Desafio: Nível Aventureiro - Interatividade no Super Trunfo

No nível Aventureiro, Foi emplementado um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso, foi usado estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo. 

🆕 **Diferença em relação ao Nível Novato:**

*   **Menu Interativo:**
    *   Modificado a estrutura de comparação do nível anterios que comparava com estrutura de decisão if-else
    *   Implementado a opção de escolha com o switch e a estrutura de decisão alinhada if-else dentro de if-else

⚙️ **Funcionalidades do Sistema:**

*   O sistema após o cadastros das cartas dará ao usuário a opção de escolher qual atributo deve ser usado para comparar as duas cartas.
*   Após escolhas do atributos serão exibidos a carta vencedora o nome da cidade e os valores do atributo escolhido e também os dados da carta derrotada.
*   No caso de Empate os dados também serão exibidos
*   Caso seja digitado uma valor fora das opções, a opção será inválida

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anterios e mais a opção escolhida pelo usuário.
*   A saída exibirá a carta vencedora, o nome da cidade e também os valores do atributo escolhido.
*   No caso de Empate os dados também serão exibidos.
*   Caso seja digitado uma valor fora das opções, a opção será inválida.
----------------------------------------------------------------------------------------
# Desafio Super Trunfo - Países - Tema 1 - Super Trunfo em c: Fundamentos e Técnicas Avançadas - Atualizado: 13/03/2025

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde você comparará os atributos das cidades.

## 🎮 Nível Novato: Cadastro Básico

No nível Novato, foi criado o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.  Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).  A combinação forma o código da carta (ex: A01, B02).

🚩 **Objetivo:** Criar um programa em C que cadastra **duas** cartas com os seguintes atributos:

*   População (`int`)
*   Área (`float`)
*   PIB (`float`)
*   Número de pontos turísticos (`int`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema permitirá ao usuário cadastrar os dados de **duas** cartas manualmente via terminal.
*   Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário insere os dados de cada carta interativamente via `scanf`.
*   O programa exibe os dados cadastrados usando `printf`, com cada atributo em uma nova linha.

## 🛡️ Nível Aventureiro: Cálculo de Atributos

No nível Aventureiro, Foi expandido o sistema para incluir o cálculo de dois novos atributos: Densidade Populacional e PIB per Capita.

🆕 **Diferença em relação ao Nível Novato:**

*   **Novos Atributos:**
    *   Densidade Populacional: População / Área (`float`)
    *   PIB per Capita: PIB / População (`float`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema calculará automaticamente a Densidade Populacional e o PIB per Capita.
*   Os novos atributos serão exibidos junto com os demais.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

## 🏆 Nível Mestre: Comparação e Super Poder

No nível Mestre, foi implementado a comparação entre duas cartas e o cálculo do "Super Poder".

🆕 **Diferença em relação ao Nível Aventureiro:**

*   **Comparação de Cartas:** O usuário poderá comparar as duas cartas.
*   **Super Poder:** Soma de todos os atributos (inclusive os calculados), com a densidade populacional *invertida* antes da soma (1/densidade).  Tipo: `float`.

⚙️ **Funcionalidades do Sistema:**

*   Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
*   Para Densidade Populacional, vence a carta com o *menor* valor.
*   Para os demais atributos (e o Super Poder), vence a carta com o *maior* valor.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anteriores, mas a População agora é `unsigned long int`.
*   A saída mostrará o resultado da comparação para cada atributo e o Super Poder.

*   Fim da primeira etapa: Tema 1 - Super Trunfo em c: Fundamentos e Técnicas Avançadas 
--------------------------------------------------------------------------------------------------------------
# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Super Trunfo - Países - Comparação das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! Neste projeto, você desenvolverá um sistema para comparar cartas baseadas em atributos de cidades. O desafio é dividido em três níveis: Novato, Aventureiro e Mestre. Cada nível adiciona novas funcionalidades e complexidades, permitindo um aprendizado progressivo.

## 🏅 Nível Novato

No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão `if` e `if-else`.

### 🚩 Objetivos:
- **Cadastro de Cartas:** O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- **Comparação de Cartas:** O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- **Exibição de Resultados:** Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.

### 📥 Entrada de Dados:
- Os dados das cartas serão inseridos manualmente via terminal.
- O sistema solicitará interativamente as informações de cada carta.

### 📤 Saída de Dados:
- Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
- O resultado da comparação será mostrado, indicando a carta vencedora.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando `switch`.

### 🆕 Diferença em relação ao Nível Novato:
- **Menu Interativo:** O usuário poderá escolher diferentes atributos para comparação através de um menu.
- **Comparação Aninhada:** Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.

### 🚩 Novas Funcionalidades:
- **Cadastro de Cartas:** Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
- **Menu Interativo:** Uso de `switch` para criar um menu que permite ao jogador escolher os atributos a serem comparados.
- **Exibição de Resultados:** O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.

---

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Escolha de Dois Atributos:** O usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.

---

## 📋 Requisitos Funcionais Comuns
- **Cadastro de Cartas:** O sistema deve permitir o cadastro de cartas com as informações necessárias.
- **Comparação:** O sistema deve comparar as cartas e determinar a vencedora com base nas regras estabelecidas.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara, indicando a carta vencedora.

## 📌 Requisitos Não Funcionais Comuns
- **Usabilidade:** A interface do usuário deve ser simples e intuitiva.
- **Performance:** O sistema deve executar operações sem atrasos perceptíveis.
- **Manutenibilidade:** O código deve ser bem estruturado e documentado.
- **Confiabilidade:** O sistema deve ser robusto e capaz de lidar com entradas inválidas de forma adequada.

---

Boa sorte no desenvolvimento deste desafio e aproveite para aprender e se divertir enquanto progride pelos níveis!

Equipe de Ensino - MateCheck
