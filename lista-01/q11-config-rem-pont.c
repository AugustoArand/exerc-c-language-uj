// #include <stdio.h>

// // Função para alterar o valor do volume remotamente
// void alterarVolume(int *volume) {
//     int novoVolume;
//     printf("Digite o novo valor do volume: "); // Segunda mensagem que é exibida no prompt
//     scanf("%d", &novoVolume); // Leitura do novo volume digitado
//     *volume = novoVolume; // Quando essa alteração for feita, ela será refletira no "volume" da "main"
// }

// int main() {
//     int volume = 50; // A primeira mensagem na tela será o volume inicial
//     printf("Volume inicial: %d\n", volume);

//     // A função alterar volume é chamada, para atualizar o volume
//     alterarVolume(&volume);

//     printf("Volume atualizado: %d\n", volume); // É exibido o novo volume

//     return 0;
// }