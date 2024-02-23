#include <stdio.h>
#include <math.h>

// Definición de la función a integrar
double funcion(double x) {
    return sin(x); // Cambia esta función según tus necesidades
}

// Implementación de la regla del trapecio
double reglaDelTrapecio(double a, double b, int n) {
    double h = (b - a) / n;
    double integral = 0.5 * (funcion(a) + funcion(b)); // Primer y último término

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        integral += funcion(x);
    }

    return integral * h;
}

int main() {
    double a, b;
    int n;

    printf("Ingrese el límite inferior de integración (a): ");
    scanf("%lf", &a);

    printf("Ingrese el límite superior de integración (b): ");
    scanf("%lf", &b);

    printf("Ingrese el número de trapecios (n): ");
    scanf("%d", &n);

    // Calculando el área bajo la curva usando la regla del trapecio
    double area = reglaDelTrapecio(a, b, n);

    printf("El área bajo la curva es: %.6f\n", area);

    return 0;
}
