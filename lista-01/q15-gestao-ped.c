// #include <stdio.h>
// #include <stdlib.h>


// // Malloc (Memory Allocation - Função da stdlib) -> Alocação dinâmica de memória. No caso do nosso código, estamos alocando memória suficiente para a quantidade de pedidos que é solicitada no inicio do programa. Armazenado em "n". No caso de não haver memória suficiente, ele retorna NULL e o programa é encerrado.

// // Estrutura do Malloc -> (tipo *)malloc(n * sizeof(tipo))
// // Importante lembrar que (n * sizeof (tipo)) é referente ao tamanho em bytes que será alocado.

// int main() {
//     int n, i;
//     float *pedidos, soma = 0, media;

//     printf("Quantos pedidos deseja registrar? ");
//     scanf("%d", &n);

//     // Alocação dinâmica de memória para os pedidos (Uso do Malloc)
//     pedidos = (float *)malloc(n * sizeof(float));
//     if (pedidos == NULL) {
//         printf("Erro ao alocar memória!\n");
//         return 1;
//     }

//     // Preenchendo o vetor com os valores dos pedidos
//     for (i = 0; i < n; i++) {
//         printf("Digite o valor do pedido %d: ", i + 1);
//         scanf("%f", &pedidos[i]);
//         soma += pedidos[i];
//     }
//     // Após a leitura do laço acima é calculado a média para ser mostrada ao usuário
//     media = soma / n;
//     printf("Média dos pedidos: %.2f\n", media);

//     // Liberando a memória alocada. Processo IMPRESCINDIVEL para evitar vazamento de memória.
//     free(pedidos);

//     return 0;
// }