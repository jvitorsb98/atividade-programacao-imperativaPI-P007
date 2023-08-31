#include<iostream>

using namespace std;

int main(){

    int altura;
    char caracter = 'A';

    printf("Entre com a altura do padrão : ");
    scanf("%d",&altura);

    for(int i = 0 ; i < altura ; i++){
        for(int j=0 ; j <= i ; j++){
            printf("%c",caracter);
            caracter++;
        }
        cout << endl;
    }


    return 0;
}