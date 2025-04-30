#include <stdio.h>
int main(){

    /*
Jogo de batalha naval - Nível Novato
Desenvolvido por Anderson Ferreira
*/

int navioLinha1 = 3, navioColuna1 = 0; // Posições do navio 1 na Horizontal
int navioLinha2 = 5, navioColuna2 = 6; // Posições do navio 2 na Vertical
int m[10][10]; // Definindo a matriz

// Inicializa tudo com 0 (Mar sem navios)
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
    m[i][j] = 0;
    }
}
printf("******* JOGO BATALHA NAVAL *******\n\n");
printf("Mar sem navios\n");
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf("%d ", m[i][j]);
    }
    printf("\n");
}
printf("\n");

// Comprimento do Navio 1 na Horizontal:
m[navioLinha1][navioColuna1] = 3;
m[navioLinha1][navioColuna1 + 1] = 3;
m[navioLinha1][navioColuna1 + 2] = 3;

// Comprimento do Navio 2 na Vertical:
m[navioLinha2][navioColuna2] = 3;
m[navioLinha2+ 1][navioColuna2] = 3;
m[navioLinha2 + 2][navioColuna2] = 3;

printf("Posições dos Navios:\n");
printf("Navio 1 - Horizontal: linha %d; coluna %d\n", navioLinha1, navioColuna1);
printf("Navio 2 - Vertical: linha %d; coluna %d\n\n", navioLinha2, navioColuna2);
for (int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++){
        printf("%d ", m[i][j]); 
    }
    printf("\n");
} 

return 0;
}