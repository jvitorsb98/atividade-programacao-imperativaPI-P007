#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero;
    int numDigitos = 0;
    int temp;
    int soma = 0;
    cout << "Entre com um numero: ";
    cin >> numero;

    temp = numero;

    while (temp > 0) {
        temp /= 10;
        numDigitos++;
    }

    temp = numero;

    while (temp > 0) {
        int digito = temp % 10;
        soma += pow(digito, numDigitos);
        temp /= 10;
    }

    if (soma == numero) {
        cout << numero << " é um número Armstrong." << endl;
    } else {
        cout << numero << " não é um número Armstrong." << endl;
    }

    return 0;
}
