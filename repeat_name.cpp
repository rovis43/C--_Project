#include <iostream>
#include <string>

// Função recursiva para imprimir a string n vezes
void imprimirStringNTimes(const std::string& minhaString, int n) {
    if (n > 0) {
        std::cout << minhaString << std::endl;
        imprimirStringNTimes(minhaString, n - 1); // Chama a função recursivamente com n-1
    }
}

int main() {
    std::string minhaString = "Fernando Rovaron"; // Substitua "Hello, world!" pela sua string desejada
    int vezes = 10;

    imprimirStringNTimes(minhaString, vezes);

    return 0;
}
