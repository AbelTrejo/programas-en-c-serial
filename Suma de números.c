#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    
    int suma = 0;
    for (int i = a; i <= b; i++) {
        suma += i;
    }
    
    printf("La suma de números consecutivos desde %d hasta %d es: %d\n", a, b, suma);
    
    return 0;
}
