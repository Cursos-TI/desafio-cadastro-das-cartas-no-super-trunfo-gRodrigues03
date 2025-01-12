#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    char cod_carta[3];
    char nome_cidade[40];
    int populacao;
    float area;
    float densidade_populacional;
    float pib;
    float pib_per_capita;
    int qtd_pontos_turisticos;


    // Solicitar valores ao usuário e assosciá-los às variáveis adequadas
    printf("Digite o estado: ");
    scanf("%c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km² (somente números, ex.: 75.6): ");
    scanf("%f", &area);

    densidade_populacional = (populacao/area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    pib_per_capita = (pib/populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos);

    // Separação visual entre entrada e saída de dados no terminal
    printf("\n////////////////////////////////////////////////////////////////////////\n\n");

    // Mostrar os dados da carta "inserida"
    printf("Estado: %c\n", estado);

    printf("Código da carta: %c%s\n", estado, cod_carta);

    printf("Nome da cidade: %s\n", nome_cidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("Densidade Populacional: %.2f/km²\n", densidade_populacional);

    printf("PIB: %.2f\n", pib);

    printf("PIB per capita: %.2f\n", pib_per_capita);

    printf("Número de pontos turísticos: %d\n", qtd_pontos_turisticos);


    return 0;
}
