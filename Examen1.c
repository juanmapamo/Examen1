#include <stdio.h>
//Construya un programa que lea de forma continua números 
//introducidos por el usuario y vaya contando los números negativos. El programa se debe detener cuando el usuario ingrese el número cero.
int main () 
{
    int numero;
    int contador=0;
    // Aqui entraras en un ciclo en el cual tu podras ingresar la cantidad de numeros que desees, pero solo se contaran los negativos.
    do
    {
     printf ("Ingrese un numero, solo se contaran los numeros negativos\n.");
     scanf("%d", &numero);
     if (numero<0) 
     {
        contador++;
     }
    } while (numero!=0);
    // Aqui te mostrara cuantos numeros negativos psusiste.
    printf ("Los numeros negativos que usted coloco son %d", contador);
    
}