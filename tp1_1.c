#include <stdio.h>

int main (){
    
    printf("Hola Mundo\n");

    int num1 = 1, *p_num1;

    p_num1 = &num1;

    printf("Contenido del puntero: %d\n", *p_num1);
    printf("Direccion de memoria almacenada por el puntero: %p\n", p_num1);
    printf("Direccion de memoria de la variable: %p\n", &num1);
    printf("Direccion de memoria de puntero: %p\n", &p_num1);
    printf("Tamaño de memoria utilizado por la variable: %d\n", sizeof(num1));

    return 0;
}