#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int escolha;
    int num1, num2;
    char continuar;

    do {
        printf("Bem-vindo a minha calculadora\n");
        printf("\n1 - Soma \n2 - Subtra��o \n3 - Multiplica��o \n4 - Divis�o\n");
        printf("\nDigite aqui: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nFa�a sua soma aqui");
                printf("\nDigite o primeiro n�mero: ");
                scanf("%d", &num1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &num2);
                printf("\nResultado da sua soma: %d\n", num1 + num2);
                break;

            case 2:
                printf("\nFa�a sua subtra��o aqui");
                printf("\nDigite o primeiro n�mero: ");
                scanf("%d", &num1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &num2);
                printf("\nResultado da sua subtra��o: %d\n", num1 - num2);
                break;

            case 3:
                printf("\nFa�a sua multiplica��o aqui");
                printf("\nDigite o primeiro n�mero: ");
                scanf("%d", &num1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &num2);
                printf("\nResultado da sua multiplica��o: %d\n", num1 * num2);
                break;

            case 4:
                printf("\nFa�a sua divis�o aqui");
                printf("\nDigite o primeiro n�mero: ");
                scanf("%d", &num1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &num2);
                if (num2 != 0) {
                    printf("\nResultado da sua divis�o: %d\n", num1 / num2);
                } else {
                    printf("\nErro: Divis�o por zero n�o permitida.\n");
                }
                break;

            default:
                printf("\nOp��o inv�lida.\n");
                break;
        }

        // Pergunta se o usu�rio deseja realizar outra opera��o
        printf("Deseja realizar outra opera��o? (S/N): ");
        scanf(" %c", &continuar);  // O espa�o antes do %c � importante para ignorar o enter anterior

    } while (continuar == 'S' || continuar == 's');  // Continua enquanto o usu�rio digitar 'S' ou 's'

    printf("Obrigado por usar a calculadora!\n");
    return 0;
}

