#include <iostream>

int main(){

    std::string operacao;
    double num1 , num2;

    std::cout << "escolha a operacao (+ , - , * , /): ";
    std::cin >> operacao;

    std::cout << "numero 1: " << std::endl;
    std::cin >> num1;

    std::cout << "numero 2: " << std::endl;
    std::cin >> num2;

    if (operacao == "+"){
        std::cout << num1 + num2;
    }

    else if (operacao == "-"){
        std::cout << num1 - num2;
    }

    else if (operacao == "*"){
        std::cout << num1 * num2;
    }

    else if (operacao == "/"){
        if(num1 == 0 or num2 == 0){
            std::cout << "0 nao e um numero divisivel";
        }

        else{
        std::cout << num1 / num2;
        }
    }

    else{
        std::cout << "insira uma operacao valida";
    }

    return 0;
}