#include <stdio.h>
int main(){

    /*
Jogo de batalha naval - Nível Mestre
Desenvolvido por Anderson Ferreira
*/

// DEFINIÇÃO DAS MATRIZES DE HABILIDADE E RELACIONADOS

int cone[5][5] = {0}; // Matriz Cone
int cruz[5][5]; // Matriz Cruz
int tamanhoCruz = 5; // Limite do tamanho para a cruz
int centroCruz = tamanhoCruz / 2; // Definição do centro para a cruz
int octaedro[5][5]; // Matriz Octaedro
int tamanhoOctaedro = 5; // Limite do tamanho para Octaedro
int centroOctaedro = tamanhoOctaedro /2; // Limite do centro para Octaedro
int raioOctaedro = 2; // Raio para Octaedro

// DEFINIÇÃO DAS POSIÇÕES DOS NAVIOS

int navioLinha1 = 3, navioColuna1 = 0; // Posições do navio 1 na Horizontal
int navioLinha2 = 5, navioColuna2 = 6; // Posições do navio 2 na Vertical
int navioLinha3 = 0, navioColuna3= 0; // Posição do Navio 3 na diagonal esquerda
int navioLinha4 = 2, navioColuna4 = 7; // Posição do navio 4 na diagonal direita

int m[10][10]; // Definindo a matriz

// Inicializa tudo com 0 (Mar sem navios)
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
    m[i][j] = 0;
    }
}
printf("******* JOGO BATALHA NAVAL *******\n\n");
printf("******* HABILIDADES EM MATRIZES 5 X 5 *******");

// Prenchendo a matriz cone 5 x 5
for(int i = 0; i < 3; i++){
    for (int j = 0; j < 5; j++){
        if(j >= 2 - i && j <= 2 + i){
            cone[i][j] = 1;
        }
    }
    
}

// Printando a Matriz cone 5 x 5
printf("\n\n******* MATRIZ DE HABILIDADE EM CONE *******\n");
for(int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
            printf("%d ", cone[i][j]);
    }
    printf("\n");
}
printf("\n\n");
    
// Prenchendo a matriz cruz 5 x 5
for (int i = 0; i < tamanhoCruz; i++) {
    for (int j = 0; j < tamanhoCruz; j++) {
        if (i == centroCruz || j == centroCruz) {
            cruz[i][j] = 1;
        } else {
            cruz[i][j] = 0;
        }
    }
}

// Printando matriz cruz
printf("******* MATRIZ DE HABILIDADE EM CRUZ *******\n");
for (int i = 0; i < tamanhoCruz; i++) {
    for (int j = 0; j < tamanhoCruz; j++) {
        printf("%d ", cruz[i][j]);
    }
    printf("\n");
}
printf("\n\n");

// Prenchendo a matriz octaedro 5 x 5
for (int i = 0; i < tamanhoOctaedro; i++) {
for (int j = 0; j < tamanhoOctaedro; j++) {
    int dist = (i > centroOctaedro ? i - centroOctaedro : centroOctaedro - i) + 
               (j > centroOctaedro ? j - centroOctaedro : centroOctaedro - j);
    if (dist <= raioOctaedro) {
        octaedro[i][j] = 1;
    } else {
        octaedro[i][j] = 0;
    }
}
}

// Printando a matriz octaedro 5 x 5
printf("******* MATRIZ DE HABILIDADE OCTAEDRO *******\n");
for (int i = 0; i < tamanhoOctaedro; i++) {
    for (int j = 0; j < tamanhoOctaedro; j++) {
        printf("%d ", octaedro[i][j]);
    }
    printf("\n");
}
printf("\n\n");

// SEQUÊNCIA DOS NAVIOS

printf("MAR SEM NAVIOS\n");
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf("%d ", m[i][j]);
    }
    printf("\n");
}
printf("\n");

// Comprimento do Navio 1 na Horizontal com validação:
if(navioColuna1 + 2 < 10){
    m[navioLinha1][navioColuna1] = 3;
    m[navioLinha1][navioColuna1 + 1] = 3;
    m[navioLinha1][navioColuna1 + 2] = 3;
} else{
    printf("A posição do navio é inválida!\n");
}

// Comprimento do Navio 2 na Vertical com validação:
if(navioLinha2 + 2 < 10){
    m[navioLinha2][navioColuna2] = 3;
    m[navioLinha2+ 1][navioColuna2] = 3;
    m[navioLinha2 + 2][navioColuna2] = 3;
}else{
    printf("A posição do navio é inválida!\n");
}

// Comprimento do Navio 3 na Diagonal esquerda com validação:
if(navioLinha3 + 2 < 10 && navioColuna3 + 2 < 10){
    m[navioLinha3][navioColuna3] = 3;
    m[navioLinha3 + 1][navioColuna3 + 1] = 3;
    m[navioLinha3 + 2][navioColuna3 + 2] = 3;

} else {
    printf("A posição do navio é inválida!\n");
}

// Comprimento do Navio 4 na Diagonal direita com validação:
if(navioLinha4 + 2 < 10 && navioColuna4 - 2 >= 0){
    m[navioLinha4][navioColuna4] = 3;
    m[navioLinha4 + 1][navioColuna4 - 1] = 3;
    m[navioLinha4 + 2][navioColuna4 - 2] = 3;

} else {
    printf("A posição do navio é inválida!\n");
}

// Declarando quais foram as posições dos navios
printf("Posições dos Navios:\n\n");
printf("Navio 1 - Horizontal: linha %d; coluna %d\n", navioLinha1, navioColuna1); // Navio Horizontal
printf("Navio 2 - Vertical: linha %d; coluna %d\n", navioLinha2, navioColuna2); // Navio vertical
printf("Navio 3 - Diagoanl esquerda: linha %d; coluna %d\n", navioLinha3, navioColuna3); // Navio vertical direita
printf("Navio 4 - Diagoanl direita: linha %d; coluna %d\n\n", navioLinha4, navioColuna4); // Navio vertical esquerda

// Inprimindo as posições para exibição final das posições na matriz
for (int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++){
        printf("%d ", m[i][j]); 
    }
    printf("\n");
} 

return 0;
}
