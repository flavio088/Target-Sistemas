#include <iostream>

int main() {
    // Declarando três variáveis.
    int Indice = 13, Soma = 0, K = 0;

    // Loop for para somar valores de 1 até Indice à variável Soma
    for (K = 1; K <= Indice; K++) {
        Soma += K; 
    }

    // Imprime o resultado final da soma na tela
    std::cout << "O resultado final da soma dos números de 1 a " << Indice << " é: " << Soma << std::endl;

    return 0;
}
