#include <stdio.h>
#include <locale.h>
#include <math.h>

// CORES
#include <stdlib.h>
#define RESET           "\x1b[0m"
#define GREEN           "\x1b[32m"
#define WHITE_BRIGHT    "\x1b[97m"
#define BOLD            "\x1b[1m"
#define UNDERLINE       "\x1b[4m"
#define YELLOW          "\x1b[33m"


main() {
    setlocale(LC_ALL, "portuguese");

    float salario_bruto, aluguel = 0, agua = 0, luz = 0, mercado = 0, internet = 0;
    float descontos = 0, extra = 0, gasto_total, valor_final, cartao_credito = 0, ganhos, faculdade = 0, esporte = 0;
    char resposta;

    system("cls");

    printf("%s=============================================================================================%s\n", GREEN, RESET);
    printf("                                             %sBEM - VINDOS%s\n", GREEN, RESET);
    printf("                                               %sS.A.R.C%s\n", YELLOW, RESET);
    printf("				%sSistema Auxiliar de Controle de Renda%s\n", UNDERLINE, RESET);
    printf("%s=============================================================================================%s\n\n\n", GREEN, RESET);

		//SALARIO BRUTO
    printf("Olá, iremos te ajudar a organizar sua vida financeira! \nPara isso, precisamos que você nos responda algumas perguntas a seguir referente a renda:\n\n");
    printf("Qual é o seu salário bruto?\n");
    while (scanf("%f", &salario_bruto) != 1) {
        printf("Entrada inválida. Por favor, insira o valor do seu salario.\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }

    	//DESCONTOS
    printf("\nVocê tem descontos no seu salário? (S/N)\n");
    while (scanf(" %c", &resposta), resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
        printf("Resposta inválida. Por favor, responda com 'S' ou 'N'.\n");
    }
    if (resposta == 'S' || resposta == 's') {
        printf("\nQual o valor total de descontos no seu salário? (olhe no seu holerite)\n");
        while (scanf("%f", &descontos) != 1) {
            printf("Entrada inválida. Por favor, insira o valor dos descontos no seu salario.\n");
            while (getchar() != '\n'); 
        }
    }

    	//ALUGUEL
    printf("\nVocê paga aluguel? (S/N)\n");
    while (scanf(" %c", &resposta), resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
        printf("Resposta inválida. Por favor, responda com 'S' ou 'N'.\n");
    }
    if (resposta == 'S' || resposta == 's') {
        printf("\nQual o valor?\n");
        while (scanf("%f", &aluguel) != 1) {
            printf("Entrada inválida. Por favor, insira o valor do aluguel.\n");
            while (getchar() != '\n'); 
        }
    }
    	//INTERNET
    printf("\nVocê paga internet? (S/N)\n");
    while (scanf(" %c", &resposta), resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
        printf("Resposta inválida. Por favor, responda com 'S' ou 'N'.\n");
    }
    if (resposta == 'S' || resposta == 's') {
        printf("\nQual o valor?\n");
        while (scanf("%f", &internet) != 1) {
            printf("Entrada inválida. Por favor, insira o valor mensal\n");
            while (getchar() != '\n'); 
        }
    }
    	//LUZ
    printf("\nQual é o valor da conta de luz?\n");
    while (scanf("%f", &luz) != 1) {
        printf("Entrada inválida. Por favor, insira o valor da conta de luz\n");
        while (getchar() != '\n');
    }
    	//AGUA
    printf("\nQual é o valor da conta de água?\n");
    while (scanf("%f", &agua) != 1) {
        printf("Entrada inválida. Por favor, insira o valor da conta de água\n");
        while (getchar() != '\n');
    }
    	//MERCADO
    printf("\nQual é o valor total das compras do mês?\n");
    while (scanf("%f", &mercado) != 1) {
        printf("Entrada inválida. Por favor, insira o valor total das compras do mês\n");
        while (getchar() != '\n');
    }
    	//CARTAO DE CREDITO
    printf("\nVocê tem parcelas de cartão de crédito para pagar? (S/N)\n");
    while (scanf(" %c", &resposta), resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
        printf("Resposta inválida. Por favor, responda com 'S' ou 'N'.\n");
    }
    if (resposta == 'S' || resposta == 's') {
        printf("\nQual o valor da parcela mensalmente?\n");
        while (scanf("%f", &cartao_credito) != 1) {
            printf("Entrada inválida. Por favor, insira o valor das parcelas mensais.\n");
            while (getchar() != '\n');
        }
    }
    	//FACULDADE
    printf("\nVocê paga algum curso ou faculdade?(S/N)\n");
    while (scanf(" %c", &resposta), resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
        printf("Resposta inválida. Por favor, responda com 'S' ou 'N'.\n");
    }
    if (resposta == 'S' || resposta == 's') {
        printf("\nQual o valor da mensalidade? \n");
        while (scanf("%f", &faculdade) != 1) {
            printf("Entrada inválida. Por favor, insira o valor da mensalidade. \n");
            while (getchar() != '\n'); 
        }
    }
    	//ESPORTE
    printf("\nVocê paga aulas de esporte?(S/N)\n");
    while (scanf(" %c", &resposta), resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
        printf("Resposta inválida. Por favor, responda com 'S' ou 'N'.\n");
    }
    if (resposta == 'S' || resposta == 's') {
        printf("\nQual o valor? \n");
        while (scanf("%f", &esporte) != 1) {
            printf("Entrada inválida. Por favor, insira um número.\n");
            while (getchar() != '\n'); 
        }
    }
    	//RENDA EXTRA
    printf("\nVocê fez alguma renda extra esse mês(S/N)\n");
    while (scanf(" %c", &resposta), resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
        printf("Resposta inválida. Por favor, responda com 'S' ou 'N'.\n");
    }
    if (resposta == 'S' || resposta == 's') {
        printf("\nQual o valor? \n");
        while (scanf("%f", &extra) != 1) {
            printf("Entrada inválida. Por favor, insira o valor da sua renda extra.\n");
            while (getchar() != '\n'); 
    	}
	}
		
    ganhos = salario_bruto + extra - descontos;
    gasto_total = aluguel + agua + luz + mercado + internet + cartao_credito + faculdade + esporte;
    valor_final = ganhos - gasto_total;

    printf("\nTotal de ganhos no mês: %sR$%.2f%s\n", GREEN, ganhos, RESET);
    printf("Total de gastos no mês: %sR$%.2f%s\n\n", GREEN, gasto_total, RESET);
    printf("Seu valor final ao pagar as contas é de %sR$%.2f%s\n\n", GREEN, valor_final, RESET);

    if (valor_final < 0) {
        printf("\nAtenção, você está gastando mais do que pode! Vamos economizar.\n");
    } else if (valor_final > 0 && valor_final < 300) {
        printf("\nCuidado, reveja seus gastos para não correr o risco de fechar o mês no negativo.\n");
    } else if (valor_final >= 300) {
         printf("\nVocê está bem organizado, você pode usar %sR$%.2f%s para lazer.\n", GREEN, valor_final / 3, RESET);
    }

		// GASTOS EXCESSIVOS
    printf("\n\nVocê gostaria de verificar os gastos excessivos? (S/N)\n");
    while (scanf(" %c", &resposta), resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
        printf("Resposta inválida. Por favor, responda com 'S' ou 'N'.\n");
    }
    
    bool naoTemGastoExc = true;
    if (resposta == 'S' || resposta == 's') {
        if ((agua + luz) > 0.1 * salario_bruto) {
        	naoTemGastoExc = false;
            float excesso = (agua + luz) - 0.1 * salario_bruto;
            printf("\nVocê está gastando %.2f%% a mais em água e luz. Considere reduzir este gasto em %sR$%.2f%s.\n", (((agua + luz) / salario_bruto) - 0.1) * 100, GREEN, excesso, RESET);
        }
        if (mercado > 0.2 * salario_bruto) {
        	naoTemGastoExc = false;
            float excesso = mercado - 0.2 * salario_bruto;
            printf("\nVocê está gastando %.2f%% a mais em mercado. Considere reduzir este gasto em %sR$%.2f%s.\n", ((mercado / salario_bruto) - 0.2) * 100, GREEN, excesso, RESET);
        }
        if (internet > 0.05 * salario_bruto) {
        	naoTemGastoExc = false;
            float excesso = internet - 0.05 * salario_bruto;
            printf("\nVocê está gastando %.2f%% a mais em internet. Considere reduzir este gasto em %sR$%.2f%s.\n", ((internet / salario_bruto) - 0.05) * 100, GREEN, excesso, RESET);
        }
        if (cartao_credito > 0.15 * salario_bruto) {
        	naoTemGastoExc = false;
            float excesso = cartao_credito - 0.15 * salario_bruto;
            printf("\nVocê está gastando %.2f%% a mais em cartão de crédito. Considere reduzir este gasto em %sR$%.2f%s.\n", ((cartao_credito / salario_bruto) - 0.15) * 100, GREEN, excesso, RESET);
        }
        if (esporte > 0.05 * salario_bruto) {
        	naoTemGastoExc = false;
            float excesso = esporte - 0.05 * salario_bruto;
            printf("\nVocê está gastando %.2f%% a mais em esporte. Considere reduzir este gasto em %sR$%.2f%s.\n", ((esporte / salario_bruto) - 0.05) * 100, GREEN, excesso, RESET);
        }
		
		if (naoTemGastoExc) {
			printf("\n\n\nParabéns, você não tem gastos excessivos.\n");
		}
    }
    
    printf("\nVolte sempre.\n");
    
    printf("%s", RESET);
}

