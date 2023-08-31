#include<iostream>
#include <algorithm> 
#include<string>
#include<cstring>

using namespace std;

int main(){

    int numero;
    string num;
    string num_invertido;

    cout << "Entre com um numero : ";
    cin >> numero;

    num = to_string(numero);
    num_invertido =  to_string(numero);

    reverse(num_invertido.begin(), num_invertido.end());

    if(strcmp(num,num_invertido)==0){
        printf("%d é um palindromo",numero);
    }else{
        printf("%d não é um palindromo",numero);
    }





    return 0;
}