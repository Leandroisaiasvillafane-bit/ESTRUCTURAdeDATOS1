#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct Empleado {
	string nombre;
	string apellido;
	float salario;
};

struct Alumno {
	string nombre;
	string apellido;
	float promedio;
};

void aumentarSueldo(Empleado A[], int n, Alumno B[], int m) {
	for (int i = 0; i < m; i++) {
		if (B[i].promedio > 7.0) {
			for (int j = 0; j < n; j++) {
				if (B[i].nombre == A[j].nombre && B[i].apellido == A[j].apellido) {
					A[j].salario *= 1.10;
					break;
				}
			}
		}
	}
}

void mostrarEmpleados(Empleado A[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%s, %s - $%.2f\n",
			A[i].apellido.c_str(),
			A[i].nombre.c_str(),
			A[i].salario);
	}
}

int main() {
	const int n = 3, m = 3;

	Empleado A[n] = {
	{"Leandro", "Villafañe", 50000},
	{"Carlos",  "Perez",     80000},
	{"Martin",  "Gomez",     70000},
	};

	Alumno B[m] = {
	{"Leandro", "Villafañe", 8.5},
	{"Carlos",  "Perez",     6.0},
	{"Martin",  "Gomez",     9.2},
	};

	printf("Salarios antes:\n");
	mostrarEmpleados(A, n);

	aumentarSueldo(A, n, B, m);

	printf("\nSalarios despues:\n");
	mostrarEmpleados(A, n);

	return 0;
}
```

