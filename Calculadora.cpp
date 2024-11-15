#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int escolha;
    int num1, num2;
    char continuar;

    do {
        printf("Bem-vindo a minha calculadora\n");
        printf("\n1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão\n");
        printf("\nDigite aqui: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nFaça sua soma aqui");
                printf("\nDigite o primeiro número: ");
                scanf("%d", &num1);
                printf("Digite o segundo número: ");
                scanf("%d", &num2);
                printf("\nResultado da sua soma: %d\n", num1 + num2);
                break;

            case 2:
                printf("\nFaça sua subtração aqui");
                printf("\nDigite o primeiro número: ");
                scanf("%d", &num1);
                printf("Digite o segundo número: ");
                scanf("%d", &num2);
                printf("\nResultado da sua subtração: %d\n", num1 - num2);
                break;

            case 3:
                printf("\nFaça sua multiplicação aqui");
                printf("\nDigite o primeiro número: ");
                scanf("%d", &num1);
                printf("Digite o segundo número: ");
                scanf("%d", &num2);
                printf("\nResultado da sua multiplicação: %d\n", num1 * num2);
                break;

            case 4:
                printf("\nFaça sua divisão aqui");
                printf("\nDigite o primeiro número: ");
                scanf("%d", &num1);
                printf("Digite o segundo número: ");
                scanf("%d", &num2);
                if (num2 != 0) {
                    printf("\nResultado da sua divisão: %d\n", num1 / num2);
                } else {
                    printf("\nErro: Divisão por zero não permitida.\n");
                }
                break;

            default:
                printf("\nOpção inválida.\n");
                break;
        }

        // Pergunta se o usuário deseja realizar outra operação
        printf("Deseja realizar outra operação? (S/N): ");
        scanf(" %c", &continuar);  // O espaço antes do %c é importante para ignorar o enter anterior

    } while (continuar == 'S' || continuar == 's');  // Continua enquanto o usuário digitar 'S' ou 's'

    printf("Obrigado por usar a calculadora!\n");
    return 0;
}

