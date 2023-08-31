#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int numero;
    string num;
    string num_invertido;

    cout << "Entre com um numero: ";
    cin >> numero;

    num = to_string(numero);
    num_invertido = num;
    
    reverse(num_invertido.begin(), num_invertido.end());
    
    if (num == num_invertido) {
        cout << numero << " é um palíndromo" << endl;
    } else {
        cout << numero << " não é um palíndromo" << endl;
    }

    return 0;
}