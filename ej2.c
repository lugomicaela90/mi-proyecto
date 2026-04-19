/*Calcular el sueldo de un operario ingresando por teclado la cantidad de horas que
trabajó en el mes y el valor de la hora. Mostrarle el resultado al usuario con un
mensaje adecuado.*/

#include <stdio.h>

int main()
{
        int horas;
        float valor_p_hora;
        float sueldo;

        printf("Ingrese la cantidad de horas que trabajó este mes: ");
        scanf("%i", &horas);

        printf("Ahora ingrese lo que cobra por hora: ");
        scanf("%f", &valor_p_hora);
        
        sueldo = horas * valor_p_hora;
        printf("El sueldo que te corresponde por las %i horas trabajadas este mes es %f\n", horas, sueldo);
        return 0;
}