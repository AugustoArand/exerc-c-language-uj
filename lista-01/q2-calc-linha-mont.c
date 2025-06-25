// #include <stdio.h>

// // Função que calcula o fatorial de um número inteiro n
// int calcular_fatorial(int n) {
//     int resultado = 1; // Inicia a contagem do 1
    
//     for(int i = 1; i <= n; i++) { // Enquanto o i < n ele incrementa. O n solicitado na função principal
//         resultado *= i; // Multiplica o resultado por i
//     }
//     return resultado; // Retorna o resultado já que ele será usado na função principal
// }

// int main() {
//     int n, resultado;
//     // Pergunta inicial ao rodar o código
//     printf("Digite o número de peças: ");
//     scanf("%d", &n);
//     // uma équena validação para não permitir número negativo
//     if(n < 0) {
//         printf("Não existe fatorial de número negativo.\n");
//     } else {
//         resultado = calcular_fatorial(n);
//         printf("O fatorial de %d é: %d\n", n, resultado);
//     }

//     return 0;
// }