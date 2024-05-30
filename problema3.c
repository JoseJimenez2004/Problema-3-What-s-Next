#include <stdio.h>

int main() {
    int a, b, c;  
    printf("Ingrese los tres términos sucesivos separados por espacios: ");
    scanf("%d %d %d", &a, &b, &c);  // Lee los tres términos sucesivos ingresados por el usuario

    int diferencia = b - a;  // Calcula la diferencia común entre los términos a y b
    int razon = c / b;  // Calcula la razón común entre los términos b y c

    if (b - a == c - b) {  // Comprueba si la diferencia entre a y b es igual a la diferencia entre b y c
        printf("Es una progresión aritmética con diferencia común: %d\n", diferencia);
        // Calculamos el siguiente término sucesivo sumando la diferencia común al último término
        printf("El siguiente término sucesivo es: %d\n", c + diferencia);
    } else if (c % b == 0 && b % a == 0 && razon == c / b) {  // Comprueba si el cociente entre c y b es igual a la razón común, y si b/a es divisible entre c/b
        // Es una progresión geométrica
        printf("Es una progresión geométrica con razón común: %d\n", razon);
        // Calculamos el siguiente término sucesivo multiplicando el último término por la razón común
        printf("El siguiente término sucesivo es: %d\n", c * razon);
    } else {
        // No es ni una progresión aritmética ni una geométrica
        printf("Los términos dados no forman una progresión aritmética ni geométrica.\n");
    }

    return 0;
}

