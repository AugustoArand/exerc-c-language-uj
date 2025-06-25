// #include <stdio.h>

// // Questão realizada a através de manipulação matematica para inverter o número
// int inverterNumero(int numero) {
//     int numeroInvertido = 0; // Numero invertido inicia com 0
//     int sinal = 1;

//     // Pequena validação para não permitir números negativos
//     if (numero < 0) {
//         sinal = -1; // Mecanismo para converter o número negativo em positivo
//         numero = -numero;
//     }

//     while (numero > 0) {
//         numeroInvertido = numeroInvertido * 10 + (numero % 10); //(numero % 10) pega o último digito do número
//         numero /= 10; // Forma abreviada de numero = numero / 10
//     }

//     return numeroInvertido * sinal;
// }

// int main() {
//     int codigo, codigoInvertido;

//     printf("Digite o código de barras (apenas números inteiros): ");
//     scanf("%d", &codigo);

//     codigoInvertido = inverterNumero(codigo);

//     printf("Código invertido: %d\n", codigoInvertido);

//     return 0;
// }