#include <stdio.h>

#define apar 10 // Número de aparatos
#define comp 100 // Número de componentes

// Función para inicializar la matriz con ceros
void int_matrix(int arr[apar][comp]) {
    int i, j;
    for (i = 0; i < apar; i++) {
        for (j = 0; j < comp; j++) {
            arr[i][j] = 0; // Asigna 0 a cada elemento
        }
    }
}

// Función para llenar la matriz con datos proporcionados por el usuario
void llenar(int arr[apar][comp]) {
    int i, j, num, num2;

    for (i = 0; i < apar; i++) {
        printf("Aparato %d\n", i + 1);
        printf("Dame la cantidad de componentes a asignar: ");
        scanf("%d", &num);

        // Limita la cantidad de componentes al máximo disponible
        if (num > comp) {
            printf("No puedes asignar más de %d componentes. Se limitará a %d.\n", comp, comp);
            num = comp;
        }

        for (j = 0; j < num; j++) {
            printf("Dame el número del componente correspondiente (0-99): ");
            scanf("%d", &num2);

            // Verifica que el índice esté dentro de los límites
            if (num2 >= 0 && num2 < comp) {
                arr[i][num2] = 1; // Marca el componente como asignado
            } else {
                printf("Componente fuera de rango. Inténtalo de nuevo.\n");
                j--; // Repite la entrada en caso de error
            }
        }
    }
}

// Función para capturar la cantidad de aparatos mensuales
void mensual(int parmen[apar]) {
    int i;
    for (i = 0; i < apar; i++) {
        printf("Número de aparatos mensuales para el aparato %d: ", i + 1);
        scanf("%d", &parmen[i]);
    }
}

int main() {
    int matriz[apar][comp]; // Matriz para almacenar datos de aparatos y componentes
    int parmensuales[apar]; // Arreglo para aparatos mensuales

    // Inicializar la matriz
    int_matrix(matriz);

    // Llenar la matriz con datos proporcionados por el usuario
    llenar(matriz);

    // Capturar el número de aparatos mensuales
    mensual(parmensuales);

    // Mostrar la matriz y el arreglo de aparatos mensuales
    printf("\nMatriz de componentes por aparato:\n");
    for (int i = 0; i < apar; i++) {
        printf("Aparato %d: ", i + 1);
        for (int j = 0; j < comp; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nAparatos mensuales:\n");
    for (int i = 0; i < apar; i++) {
        printf("Aparato %d: %d\n", i + 1, parmensuales[i]);
    }

    return 0;
}
