// #include <stdio.h>

// // Função para trocar os valores de dois inteiros usando ponteiros
// void trocar(int *a, int *b) {
//     int temp = *a; // Inicia a variável temporária com o valor de "a"
//     *a = *b; // Reassina o *a com o valor de *b
//     *b = temp; // E utiliza a variável temporária para reatribuir o valor de *b
// }

// int main() {
//     int horarioPaciente1 = 900;   // 9:00
//     int horarioPaciente2 = 1030;  // 10:30

//     printf("Horário do Paciente 1: %d\n", horarioPaciente1);
//     printf("Horário do Paciente 2: %d\n", horarioPaciente2);

//     // Troca os horários usando ponteiros
//     trocar(&horarioPaciente1, &horarioPaciente2);

//     printf("\nApós a troca:\n");
//     printf("Horário do Paciente 1: %d\n", horarioPaciente1);
//     printf("Horário do Paciente 2: %d\n", horarioPaciente2);

//     return 0;
// }