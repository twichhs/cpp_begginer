#include <iostream>
// cout << inserção
// cin >> extração

using texto_t = std::string;

int main(){

    int idade;
    texto_t nome;

    std::cout << "sua idade: ";
    std::cin >> idade;

    std::cout << "seu nome: ";
    std::cin >> nome;
    
    std::getline(std::cin >> std::ws,nome);
    // caso a variavel tenha espaços, precisamos indicar isso ao programa
    // o "std::ws", ws = white spaces para captar os espaços vazios

    std::cout << nome << " - " << idade;
    return 0;
}