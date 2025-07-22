#include <stdio.h>

int main() {
    // Declaración de variables para cada día y el total
    float monday, tuesday, wednesday, thursday, friday, total;

    // Solicitar al usuario las horas trabajadas cada día
    printf("Introduce las horas del lunes: ");
    scanf("%f", &monday);

    printf("Introduce las horas del martes: ");
    scanf("%f", &tuesday);

    printf("Introduce las horas del miércoles: ");
    scanf("%f", &wednesday);

    printf("Introduce las horas del jueves: ");
    scanf("%f", &thursday);

    printf("Introduce las horas del viernes: ");
    scanf("%f", &friday);

    // Calcular el total de horas trabajadas
    total = monday + tuesday + wednesday + thursday + friday;

    // Mostrar el resultado
    printf("\\nTotal de horas trabajadas: %.2f\\n", total);

    return 0;
}
