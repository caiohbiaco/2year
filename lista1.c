#include <stdio.h>

//1
int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }
    
    return 0;
}


// 2

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >0) {
        printf("O numero e positivo.");
    } else {
        printf("O numero e negativo.");
    };
    if (numero == 0) {
        prinf("O numero e zero.");
    };
    
    return 0;
}

// 3


void verificarLetra(char letra) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' | letra == 'E' | letra == 'I' | letra == 'o' | letra == 'U');
        
        prinf("A letra '%c' e uma vogal.", letra);
    } else { 
        printf("A letra '%c' e uma consoante.", letra);
        };
int main () {
    
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    verificarLetra(letra);
    return 0;
};

// 4

#include <stdio.h>

int main() {
    int quantidade, regiao;
    float preco_unitario = 5.00, total_compra, frete, total_com_frete;
    
    printf("Digite a quantidade de itens (até 100): ");
    scanf("%d", &quantidade);
    
    if (quantidade < 1 || quantidade > 100) {
        printf("Quantidade inválida. Deve estar entre 1 e 100.\n");
        return 1;
    }
    
    total_compra = quantidade * preco_unitario;
    
    printf("Digite o código da região de entrega (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &regiao);
    
    switch (regiao) {
        case 1:
            frete = total_compra * 0.10;
            printf("Região de entrega: Norte\n");
            break;
        case 2:
            frete = total_compra * 0.08;
            printf("Região de entrega: Nordeste\n");
            break;
        case 3:
            frete = total_compra * 0.12;
            printf("Região de entrega: Centro-Oeste\n");
            break;
        case 4:
            frete = total_compra * 0.15;
            printf("Região de entrega: Sudeste\n");
            break;
        case 5:
            frete = total_compra * 0.11;
            printf("Região de entrega: Sul\n");
            break;
        default:
            printf("Código de região inválido.\n");
            return 1;
    }
    
    total_com_frete = total_compra + frete;
    
    printf("Total da compra: R$ %.2f\n", total_compra);
    printf("Frete: R$ %.2f\n", frete);
    printf("Total a pagar (com frete): R$ %.2f\n", total_com_frete);
    
    return 0;
}

// 5 

void questao5() {
    char estado_civil;
    printf("Informe sua situação civil (S - Solteiro, C - Casado, D - Divorciado, V - Viúvo): ");
    scanf(" %c", &estado_civil);

    switch (estado_civil) {
        case 'S': {
            int idade;
            printf("Informe sua idade: ");
            scanf("%d", &idade);
            printf("Solteiro(a), Idade: %d\n", idade);
            break;
        }
        case 'C': {
            char sexo, conjuge[50];
            printf("Informe seu sexo (M/F): ");
            scanf(" %c", &sexo);
            printf("Informe o nome do cônjuge: ");
            scanf(" %49[^"]", conjuge);
            printf("Casado(a), Sexo: %c, Cônjuge: %s\n", sexo, conjuge);
            break;
        }
        case 'D': {
            int filhos, idade_mais_velho;
            printf("Informe a quantidade de filhos: ");
            scanf("%d", &filhos);
            if (filhos > 0) {
                printf("Informe a idade do mais velho: ");
                scanf("%d", &idade_mais_velho);
            } else {
                idade_mais_velho = 0;
            }
            printf("Divorciado(a), Filhos: %d, Idade do mais velho: %d\n", filhos, idade_mais_velho);
            break;
        }
        case 'V': {
            char cidade[50];
            float salario;
            printf("Informe a cidade onde vive: ");
            scanf(" %49[^"]", cidade);
            printf("Informe seu salário atual: ");
            scanf("%f", &salario);
            printf("Viúvo(a), Cidade: %s, Salário: %.2f\n", cidade, salario);
            break;
        }
        default:
            printf("Opção inválida.\n");
    }
}

//6

void questao6() {
    for (int i = 5; i <= 500; i += 5) {
        printf("%d ", i);
    }
    printf("\n");
}

//7

void questao7() {
    float numeros[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }
    printf("Metades:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i] / 2);
    }
    printf("\nMédia: %.2f\n", soma / 10);
}


//8

void questao8() {
    int inicio, fim;
    printf("Informe o intervalo (início e fim) em polegadas: ");
    scanf("%d %d", &inicio, &fim);
    printf("Polegadas | Centímetros\n");
    for (int i = inicio; i <= fim; i++) {
        printf("%d \t | %.2f\n", i, i * 2.54);
    }
}

int main() {
    int opcao;
    do {
        printf("\nEscolha a questão (5-8) ou 0 para sair: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 5: questao5(); break;
            case 6: questao6(); break;
            case 7: questao7(); break;
            case 8: questao8(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);
    return 0;
}

//9

#include <stdio.h>

void questao9() {
    char nome[20];
    int idade;
    char sexo;
    
    for (int i = 0; i < 20; i++) {
        printf("Informe o nome: ");
        scanf("%s", nome);
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm') {
            if (idade > 21) {
                printf("Nome: %s\n", nome);
            }
        }
    }
}

//10

void questao10() {
    int n, num, maior;

    printf("Informe a quantidade de números: ");
    scanf("%d", &n);

    printf("Digite um número: ");
    scanf("%d", &maior);

    for (int i = 1; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior número é: %d\n", maior);
}

//11

void questao11() {
    double populacaoA = 90000, populacaoB = 50000;
    int anos = 0;

    while (populacaoB <= populacaoA) {
        populacaoA += populacaoA * 0.009;
        populacaoB += populacaoB * 0.015;
        anos++;
    }

    printf("Serão necessários %d anos para que a cidade B tenha mais habitantes que a cidade A.\n", anos);
}

int main() {
    int opcao;
    
    printf("Escolha a questão para executar (9, 10 ou 11): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 9:
            questao9();
            break;
        case 10:
            questao10();
            break;
        case 11:
            questao11();
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

//12

#include <stdio.h>

void calcularTroco(int troco) {
    int notas[] = {50, 20, 10, 5, 2, 1}; 
    int qtdNotas[6] = {0};

    for (int i = 0; i < 6; i++) {
        qtdNotas[i] = troco / notas[i];
        troco %= notas[i];
    }

    printf("Troco fornecido:\n");
    for (int i = 0; i < 6; i++) {
        if (qtdNotas[i] > 0) {
            printf("%d cédula(s) de R$ %d,00\n", qtdNotas[i], notas[i]);
        }
    }
}

int main() {
    int precoChocolate = 2;
    int quantidade, totalCompra, pagamento, troco;

    printf("Informe a quantidade de chocolates: ");
    scanf("%d", &quantidade);

    totalCompra = quantidade * precoChocolate;

    printf("Total da compra: R$ %d,00\n", totalCompra);
    printf("Insira a cédula para pagamento (2, 5, 10, 20, 50): ");
    scanf("%d", &pagamento);

    if (pagamento < totalCompra) {
        printf("Valor insuficiente.\n");
        return 0;
    }

    troco = pagamento - totalCompra;

    if (troco == 0) {
        printf("Pagamento exato, sem troco.\n");
    } else {
        calcularTroco(troco);
    }

    return 0;
}


//13

#include <stdio.h>

int main() {
    float preco, totalCompra, desconto, totalPagar;
    int quantidadeItens, opcaoPagamento;
    int totalItensDia = 0;
    float totalVendasDia = 0;

    do {
        totalCompra = 0;
        quantidadeItens = 0;

        printf("\nRegistro de compras - Informe o valor dos produtos (0 ou negativo para finalizar a compra):\n");

        do {
            printf("Valor do produto: R$ ");
            scanf("%f", &preco);

            if (preco > 0) {
                totalCompra += preco;
                quantidadeItens++;
            }
        } while (preco > 0);

        if (totalCompra > 0) {
            printf("\nQuantidade de itens comprados: %d\n", quantidadeItens);
            printf("Total da compra: R$ %.2f\n", totalCompra);

            printf("\nEscolha a forma de pagamento:\n");
            printf("1 - Dinheiro (10%% de desconto)\n");
            printf("2 - Cartão de Débito (5%% de desconto)\n");
            printf("3 - Cartão de Crédito (sem desconto)\n");
            printf("Opção: ");
            scanf("%d", &opcaoPagamento);

            switch (opcaoPagamento) {
                case 1:
                    desconto = totalCompra * 0.10;
                    totalPagar = totalCompra - desconto;
                    printf("\nPagamento em dinheiro\n");
                    printf("Desconto de 10%%: R$ %.2f\n", desconto);
                    printf("Total a pagar: R$ %.2f\n", totalPagar);
                    break;
                case 2:
                    desconto = totalCompra * 0.05;
                    totalPagar = totalCompra - desconto;
                    printf("\nPagamento em cartão de débito\n");
                    printf("Desconto de 5%%: R$ %.2f\n", desconto);
                    printf("Total a pagar: R$ %.2f\n", totalPagar);
                    break;
                case 3:
                    totalPagar = totalCompra;
                    printf("\nPagamento em cartão de crédito\n");
                    printf("Total a pagar: R$ %.2f\n", totalPagar);
                    break;
                default:
                    printf("Opção inválida. Considerando pagamento sem desconto.\n");
                    totalPagar = totalCompra;
            }

            totalItensDia += quantidadeItens;
            totalVendasDia += totalCompra;
        }
    } while (totalCompra > 0);

    printf("\nTotal de itens vendidos no dia: %d\n", totalItensDia);
    printf("Total das vendas no dia (sem descontos): R$ %.2f\n", totalVendasDia);

    return 0;
}



    