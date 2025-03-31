#include <stdio.h>
#include <math.h>

int cuadNum (int a);
void cuadNumero (int a);
void Invertir (int a, int b);
void orden (int a, int b);

int main () {
int num1,num2;

printf("Ingrese dos numeros cualesquiera: \n");
scanf("%d %d",&num1,&num2);
orden(num1,num2);

    return 0;
}


int cuadNum (int a)
{
    int b = 2,c;
    c = pow(a,b);
    return c;
}

void cuadNumero (int a)
{

    int b = 2,c;
    c = pow(a,b);
    printf("El numero ingresado fue: %d\n", a);
    printf("El cuadrado del numero ingresado es: %d\n", c);
}

void Invertir (int a, int b)
{
    int aux;
    printf("Los valores ingresados fueron: %d %d\n",a,b);
    
    aux = a;

    a = b;
    b = aux;

    printf("Al invertirlos queda lo siguiente:\na = %d\nb = %d", a,b);
}

void orden (int a, int b)
{
    int aux;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    
    printf("Los números ingresados ordenados son: %d %d",a,b);
}