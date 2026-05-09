#include <stdio.h>

// DECLARACION VARIABLES
const int N = 10;
int S[N + 1];
int tope = 0;

// DECLARACION DE METODOS
void AGREGAR(int x);
int  ELIMINAR();
void mostrar();

// LA FUNCION PRINCIPAL
int main() {
	
    AGREGAR(10);
    AGREGAR(20);
    AGREGAR(30);
    mostrar();

    printf("Eliminado: %d\n", ELIMINAR());
	
    mostrar();

    printf("Eliminado: %d\n", ELIMINAR());
	
    printf("Eliminado: %d\n", ELIMINAR());
	
    mostrar();

    ELIMINAR(); // pila vacia
	
    return 0;
}

//  DEFINICION DE METODOS
void AGREGAR(int x) {
    if (tope == N) {
        printf("LLENA: no se puede agregar %d\n", x);
        return;
    }
    tope = tope + 1;
    S[tope] = x;
}

int ELIMINAR() {
    if (tope <= 0) {
        printf("VACIA: no hay elemento que eliminar\n");
        return -1;
    }
    int x = S[tope];
    tope = tope - 1;
    return x;
}

void mostrar() {
    printf("Pila (tope=%d): [ ", tope);
    for (int i = tope; i >= 1; i--)
        printf("%d%s", S[i], i > 1 ? ", " : "");
    printf(" ] <-- tope\n");
}

