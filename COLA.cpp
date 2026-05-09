#include <stdio.h>

// DECLARACION DE VARIABLES 
const int N = 10;
int Q[N + 1];
int qFront = 0;
int qRear  = 0;

//  DECLARACION DE METODOS
void AGREGAR(int x);
int  ELIMINAR();
void mostrar();

// LA FUNCION PRINCIPAL
int main() {

    AGREGAR(10);
    AGREGAR(20);
    AGREGAR(30);
	
    mostrar();

    AGREGAR(40);
	
    printf("Eliminado: %d\n", ELIMINAR());
	
    mostrar();

    printf("Eliminado: %d\n", ELIMINAR());
	
    printf("Eliminado: %d\n", ELIMINAR());
    mostrar();

    ELIMINAR(); // cola vacia
    return 0;
}


//  DEFINICION DE METODOS

// PROC. AGREGAR (X, q, n, rear)
void AGREGAR(int x) {
    if (qRear == N) {
        printf("LLENA: no se puede agregar %d\n", x);
        return;
    }
    qRear = qRear + 1;
    Q[qRear] = x;
}

// PROC. ELIMINAR (X, Q, n, rear)
int ELIMINAR() {
    if (qFront == qRear) {
        printf("VACIA: no hay elemento que eliminar\n");
        return -1;
    }
    qFront = qFront + 1;
    int x = Q[qFront];
    return x;
}

void mostrar() {
    printf("Cola (front=%d, rear=%d): [ ", qFront, qRear);
    for (int i = qFront + 1; i <= qRear; i++)
        printf("%d%s", Q[i], i < qRear ? ", " : "");
    printf(" ]\n");
}
