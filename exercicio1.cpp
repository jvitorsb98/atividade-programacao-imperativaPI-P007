#include<iostream>

using namespace std;

int main(){

    for(int i = 0 ; i < 100 ; i++){
        if( ((i+1)%3==0) && ((i+1)%5==0) ){
            printf("FizzBuzz\n");
        }else if((i+1)%3==0){
            printf("Fizz\n");
        }else if((i+1)%5==0){
            printf("Buzz\n");
        }else{
            printf("%d\n",i+1);
        }
    }


    return 0;
}