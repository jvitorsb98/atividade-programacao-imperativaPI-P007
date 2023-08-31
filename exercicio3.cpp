#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Entre com um numero inteiro : ";
    cin >> n;
    

    for(int i = 0 ; i < ((n/2)+1) ; i++){
        if(n%(i+1) == 0){
            printf("%d\n",i+1);
        }
    }
    printf("%d\n",n);


    return 0;
}