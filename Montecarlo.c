#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double estimate_pi(int num_points) {
    int i, num_inside_circle = 0;
    double x, y, pi_estimate;

    srand(time(NULL)); // Inicializar la semilla para generar números aleatorios

    for (i = 0; i < num_points; i++) {
        x = (double)rand() / RAND_MAX; // Generar coordenadas aleatorias en el rango [0, 1]
        y = (double)rand() / RAND_MAX;

        if (x * x + y * y <= 1) { // Comprobar si el punto está dentro del círculo
            num_inside_circle++;
        }
    }

    pi_estimate = 4.0 * num_inside_circle / num_points; // Estimar π

    return pi_estimate;
}

int main() {
    int num_points;
    double pi_estimate;

    printf("Ingrese el número de puntos para estimar pi: ");
    scanf("%d", &num_points);

    pi_estimate = estimate_pi(num_points);

    printf("Estimación de pi usando %d puntos: %f\n", num_points, pi_estimate);

    return 0;
}
