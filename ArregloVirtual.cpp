#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

/* Funcion para verificar si el parametro es un numero */
bool es_int(const char* val, int* n) {

    int tam = atoi(val);

    if (tam == 0 && val[0] != '0')
        return false;

    *n = tam;
        
    return true;
}

/* Clase que implementa la estructura de arreglo virtual */
class ArregloVirtual {
    int n;
    int ctr;
    int *a;
    int *b;
    int *T;
public:
    ArregloVirtual(int t) {
        n = t;
        a =  (int *) malloc(n * sizeof(int));
        b =  (int *) malloc(n * sizeof(int));
        T = (int *) malloc(n * sizeof(int));
        ctr = 0;
    }

    /* Funcion que asigna un valor a una posicion */
    string asignar(int i, int val) {
        if (i < 0 || n <= i)
            return ("Error, la posicion proporcionada no esta definida dentro del arreglo.");

        if (1 <= b[i] && b[i] <= ctr) {
            if (a[b[i]] == i) {
                return ("La posicion proporcionada ya ha sido inicializada anteriormente.");
            }
        }
        
        ctr++;
        a[ctr] = i;
        b[i] = ctr;
        T[i] = val;

        return ("Posicion asignada correctamente.");
    }

    /* Funcion que consulta el valor de una posicion (solo si ya esta inicializada) */
    string consultar(int i) {
        if (i < 0 || n <= i)
            return ("Error, la posicion proporcionada no esta definida dentro del arreglo.");

        if (!(1 <= b[i] && b[i] <= ctr))  
            return ("La posicion proporcionada no ha sido inicializada.");

        if (a[b[i]] != i) {
            cout << "k lala" << endl;
            return ("La posicion proporcionada no ha sido inicializada.");
        }
            

        return ("El valor en la posicion " + to_string(i) + " es: " + to_string(T[i]));
    }

    /* Funcion que limpia el arreglo */
    string limpiar() {
        ctr = 0;
        return ("Arreglo limpiado satisfactoriamente.");
    }
};

int main(int argc, char *argv[]) {

    if (argc != 2) {
        cout << "Error, el numero incorrecto de parametros de entrada es incorrecto." << endl;
        return 1;
    }
    
    int n;

    if (!(es_int(argv[1], &n))) {
        cout << "Error, el tamanio del arreglo debe ser un entero." << endl;
        return 1;
    }

    ArregloVirtual va(n);

    while (true) {
        cout << "\n1. ASIGNAR VALOR\n2. CONSULTAR POSICION\n3. LIMPIAR ARREGLO\n4. SALIR\nPor favor, seleccione una opcion: ";
        int opcion;
        cin >> opcion;
        if (opcion == 1) {
            int i, val;
            cout << "Ingrese la posicion: ";
            cin >> i;
            cout << "Ingrese el valor: ";
            cin >> val;
            cout << va.asignar(i, val) << endl;
        } else if (opcion == 2) {
            int i;
            cout << "Ingrese la posicion: ";
            cin >> i;
            cout << va.consultar(i) << endl;
        } else if (opcion == 3) {
            cout << va.limpiar() << endl;
        } else if (opcion == 4) {
            break;
        } else {
            cout << "Opcion no valida. Ingrese una de las opciones disponibles a continuacion:" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
    }
    return (0);
}
