// #include <stdio.h>

// // Função que verifica se um número é primo
// int ehPrimo(int numero) {
//   // Pequena validação para não permitir números negativos ou iguais a 1
//     if (numero <= 1) {
//         return 0;
//     }
//   // A contagem inicia do 2 e vai até a raiz quadrada do número
//     for (int i = 2; i * i <= numero; i++) {
//       // Se o resto da divisão for 0, ele não é primo
//         if (numero % i == 0) {
//             return 0; // O numero 0 em C é considerado como false
//         }
//     }
//     return 1; // se as duas condições acima não forem atendidas, ele é primo. Não necessitando do else neste bloco.
// }

// int main() {
//     int senha;

//     printf("Digite a senha (apenas números): ");
//     scanf("%d", &senha);

//     if (ehPrimo(senha)) {
//         printf("Senha forte (é um número primo).\n");
//     } else {
//         printf("Senha fraca (não é um número primo).\n");
//     }

//     return 0;
// }