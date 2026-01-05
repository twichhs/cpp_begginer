#include <iostream>

int main() {

    int numero;
    numero = 4;
    // ternary operator (operador ternario) é como uma rapida verificação, no estilo de list comprehhension

    numero % 2 == 0? std::cout << "par" : std::cout << "impar";
 // condição ? fato se for verdade : fato se for falso
    return 0;

}