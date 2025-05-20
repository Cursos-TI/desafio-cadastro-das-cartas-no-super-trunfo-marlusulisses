#include <stdio.h> 

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
// Este código realiza o cadastro fixo de duas cartas com informações de cidades brasileiras.

int main() {   
    // Variáveis da Carta 1 - Minas Gerais
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Belo Horizonte";
    int populacao1 = 2416339;
    float area1 = 586.528;
    float pib1 = 1,6; // trilhões de reais
    int pontosTuristicos1 = 5 mil;

    // Variáveis da Carta 2 - Paraná
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Curitiba";
    int populacao2 = 11824665;
    float area2 = 199.307;
    float pib2 = 718,9; // bilhões de reais
    int pontosTuristicos2 = 2.058;

    // Exibição dos Dados - Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    // Exibição dos Dados - Carta 2
    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
