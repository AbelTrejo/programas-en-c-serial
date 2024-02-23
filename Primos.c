#include <stdio.h>

// Función para calcular el máximo común divisor (MCD) de dos números
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Función para generar la tabla de tamaño NxN
void generateTable(int N) {
    int table[N][N];
    
    // Llenar la tabla con los MCDs
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            table[i-1][j-1] = gcd(i, j);
        }
    }
    
    // Imprimir la tabla
    printf("Tabla de tamaño %dx%d con los MCDs:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    
    printf("Ingrese el tamaño de la tabla (N): ");
    scanf("%d", &N);
    
    generateTable(N);
    
    return 0;
}
