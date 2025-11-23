#include <iostream>
// typedef: é como adicionar um apelido para um pedaço de código, ajuda a não deixar os códigos muito "cheios"
typedef std::string string_t; 
// using vem sendo mais usado para templates
using numero_inteiro_t = int;

int main() {
    string_t curso;
    curso = "IA";

    numero_inteiro_t idade = 19;

    std::cout << curso << " - " << idade;
};