#include <iostream>

// hypotenuse length

int main(){

    double A;
    double B;

    double C; // final value

    std::cout << "A: ";
    std::cin >> A;

    std::cout << "B: ";
    std::cin >> B;


    C = A*A + B*B;
    std::cout << "C² = " << C << "\n";

}