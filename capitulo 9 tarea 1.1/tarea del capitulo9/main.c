#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct
{
    int matricula;
    char materia[50];
    char nombre[50];
    float promedio;
} Estudiante;


void agregarEstudiante(Estudiante estudiante)
{
    FILE *archivo;
    archivo = fopen("estudiantes.txt", "a"); // Abrir el archivo en modo "agregar" (append)

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    fprintf(archivo, "%d %s %s %.2f\n", estudiante.matricula, estudiante.materia, estudiante.nombre, estudiante.promedio);
    fclose(archivo);

    printf("Estudiante agregado correctamente al archivo.\n");
}

int main() {
    Estudiante nuevoEstudiante;



    printf("Ingrese la matr�cula: ");
    scanf("%d", &nuevoEstudiante.matricula);

    printf("Ingrese la materia: ");
    scanf(" %[^\n]s", nuevoEstudiante.materia);

    printf("Ingrese el nombre: ");
    scanf(" %[^\n]s", nuevoEstudiante.nombre);

    printf("Ingrese el promedio: ");
    scanf("%f", &nuevoEstudiante.promedio);

    printf( "\tn-----------------------\n");

    agregarEstudiante(nuevoEstudiante);

    return 0;
}
