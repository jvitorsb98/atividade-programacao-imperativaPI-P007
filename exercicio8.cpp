#include <iostream>

using namespace std;

int main() {
    int altura;
    char caracter = '*';

    cout << "Entre com a altura do padrão: ";
    cin >> altura;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            cout << caracter << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j <=i; j++) {
                cout << caracter << " ";
            
        }
        cout << endl;
    }

    cout << endl;

    
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (i == 0 || j == 0 || i == altura - 1 || j == altura - 1) {
                cout << caracter << " ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}
