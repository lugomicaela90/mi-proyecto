/*Escribir una función que reciba un valor n, entero, y devuelva la suma de los
valores entre 0 y n.
Ejemplos:
suma_n(5) = 15
suma_n(120) = 7260
suma_n(120120) = 7214467260*/
#include <stdio.h>
long long int sumar_hasta(int num)
{
        int i;
        long long int suma = 0;
        for (i = 1; i <= num; i++) {
                suma += i;
        }
        return suma;
}

int main()
{
        int numero;
        printf("Ingrese un número: ");
        scanf("%i", &numero);
        printf("La suma de todos los números entre 0 y %i es: %lld\n", numero, sumar_hasta(numero));
}