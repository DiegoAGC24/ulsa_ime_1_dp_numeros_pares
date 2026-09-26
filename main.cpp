// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: cantidad de números a leer
    const int CANTIDAD = 5;

    // 2. Arreglo y contador (siempre inicializados)
    int pares[CANTIDAD];
    int totalPares = 0;

    std::cout << "Guardar los numeros pares de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: leer CANTIDAD números
    for (int contador = 0; contador < CANTIDAD; contador++) {
        int numero = leerEntero("Escribe un numero: ");

        if (numero % 2 == 0) {
            pares[totalPares] = numero;
            totalPares++;
        }
    }

    // 4. Salida
    std::cout << "Pares encontrados: " << totalPares << "\n";

    for (int i = 0; i < totalPares; i++) {
        std::cout << pares[i] << "\n";
    }

    // ¿Qué significa return 0;?
    return 0;
}