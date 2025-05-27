#include <stdio.h>
#include <string.h>

// Estrutura para representar carta de país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} CartaPais;

// Função para exibir os dados da carta
void exibirCarta(CartaPais carta) {
    printf("Nome: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões USD\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade demográfica: %.2f hab/km²\n", carta.densidade_demografica);
}

// Função principal
int main() {
    // Cartas pré-cadastradas
    CartaPais carta1 = {"Brasil", 211000000, 8515767.0, 1839.8, 12, 24.78};
    CartaPais carta2 = {"Canadá", 37590000, 9984670.0, 1736.4, 8, 3.77};

    int escolha;

    printf("=== SUPER TRUNFO: CARTAS DE PAÍSES ===\n\n");

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n--- CARTA 1 ---\n");
    exibirCarta(carta1);
    printf("\n--- CARTA 2 ---\n");
    exibirCarta(carta2);
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    switch(escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d | %s: %d\n", carta1.nome, carta1.populacao, carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.area, carta2.nome, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.area > carta1.area)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.pib, carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.pib > carta1.pib)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos turísticos\n");
            printf("%s: %d | %s: %d\n", carta1.nome, carta1.pontos_turisticos, carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade demográfica (quanto menor, melhor)\n");
            printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.densidade_demografica, carta2.nome, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.densidade_demografica < carta1.densidade_demografica)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
