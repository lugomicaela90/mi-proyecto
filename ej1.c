#include <stdio.h>

/*Hallar la superficie de un triángulo conociendo la base y la altura. Solicitarle los
datos de entrada al usuario.*/

int main()
{
        int base;
        int altura;
        float superficie;

        printf("Introduzca la base de su triángulo: ");
        scanf("%i", &base);

        printf("Ahora ingrese la altura: ");
        scanf("%i", &altura);

        superficie = (base * altura) / 2.0;
        printf("La superficie de su triángulo es: %f\n", superficie);
        return 0;
}
