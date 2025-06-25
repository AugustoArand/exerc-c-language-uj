// #include <stdio.h>

// // Função que recebe ponteiros para float e retorna a soma dos valores apontados
// float somaPrecos(float *preco1, float *preco2) {
//     return *preco1 + *preco2; // Não precisa lógica nesse sentido, apenas a soma dos valores
// }

// int main() {
//     float precoA = 19.90; // Referente a *preco1
//     float precoB = 34.50; //Referente a *preco2

//     float total = somaPrecos(&precoA, &precoB); // Armazenamos o retorno de somaPrecos em "total"

//     // Exibição dos valores
//     printf("Preço 1: R$ %.2f\n", precoA);
//     printf("Preço 2: R$ %.2f\n", precoB);
//     printf("Soma dos preços: R$ %.2f\n", total);

//     return 0;
// }