#include <iostream>


int main(){

    // loop que incrementa 1+ até chegar a 10
    for (int i = 0; i < 11; i++){
        std::cout << i << std::endl ;
    }



    // somando numeros de 1 a 100
    int soma = 0;
    for (int i = 1; i < 101; i++){
        soma = i + soma;
    }

}