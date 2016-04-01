#include <stdio.h> 
#include <stdlib.h>

int multiplicacion(int a, int b);
int division(int a, int b);
int suma(int a, int b);
int leerValor1();
int leerValor2();
int potencia(int base, int exponente);
void menu(void);

int main(void)

{
    menu();
    return 0;
}

int multiplicacion(int a, int b) {
    int cursor = 0, salida = 0;
    while (cursor < b) {
        salida = salida + a;
        cursor = cursor + 1;
    }
    //printf("Resultado de la multiplicacion de %d x %d = %d\n\n", a, b, salida);
    return salida;
}

int division(int a, int b) {
    int cociente = 0, resto = 0;

    resto = a;
    if (b == 0) {
        printf("Error, no se puede dividir por 0!\n");
    } else {
        while (resto >= b) {
            resto = resto - b;
            cociente = cociente + 1;

        }
        printf("%d divido %d es %d con resto %d\n", a, b, cociente, resto);
    }
    return 0;
}

int suma(int a, int b){
	int aux = a + b;
	printf("%d sumado a %d es %d\n", a, b, aux);
	return a + b;
}

int resta(int a, int b){
	int aux = a - b;
	printf("%d restado a %d es %d\n", a, b, aux);
	return a + b;
}

int leerValor1(){
	int a = 0;
    printf("valor 1: ");
    scanf("%d", &a);
    getchar();
    
    return a;
}

int leerValor2(){
	int b = 0;
    printf("x\n");
    printf("valor 2: ");
    scanf("%d", & b);
	getchar(); 
	
	return b;
}

int potencia(int base, int exponente){
	
	int aux = 1;
	
	if (exponente != 0 && base != 0){
		aux = base;
		int bandera = exponente - 1; // se decrementa en un valor para sincronizar con la cantidad de calculos
		
		while(bandera > 0){
			aux = multiplicacion(aux, base);
			
			bandera--;
		}
	}else if(exponente == 0 && base == 0){
		aux = 0;
	}
	
	printf("%d elevado a la %d es %d\n", base, exponente, aux);
	return aux;
}

void menu(void) {
    int opcion = 0, a = 0, b = 0, c = 0, d = 0;
    printf("Opciones Practicas\n\n1-Suma \n2-Multiplicacion \n3-Division \n4-Resta \n5-Potencia \n99-Salir\n");

    scanf("%d", & opcion);
    getchar();
    if (opcion != 99) {
        if (opcion == 1) {
            system("cls");
            printf("Suma\n");
            
			a = leerValor1();
			b = leerValor2();
			c = suma(a, b);
            getchar();

        } else if (opcion == 2) {
            system("cls");
            printf("Multiplicacion\n");

            a = leerValor1();
			b = leerValor2();
            c = multiplicacion(a, b);
            
            printf("Resultado de la multiplicacion de %d x %d = %d\n\n", a, b, c);
            getchar();
            
        } else if (opcion == 3) {
            system("cls");
            printf("Division\n");

            a = leerValor1();
			b = leerValor2();
			c = division(a, b);
            getchar();
            
        } else if (opcion == 4) {
            system("cls");
            printf("Resta\n");

			a = leerValor1();
			b = leerValor2();
			c = resta(a, b);
            getchar();

        } else if (opcion == 5) {
            system("cls");
            printf("Potencia\n");

			a = leerValor1();
			b = leerValor2();
			c = potencia(a, b);
            getchar();

        }

        system("cls");
        menu();
    }
}
