#include <stdio.h>
#include <stdlib.h>
int main(){
    int number = 0;
    int i =0 ;
    int is_prime = 1;
    printf("Type the number : ");
    scanf("%d" , &number);
    if (number <= 1){
        printf("%d is not a prime number ", number);
        return 0;
    }
    for (i = 2 ; i<= (number / 2) ; i++){
        if(number % i == 0){
            is_prime = 0 ;
            break;
        }
    }
    if(is_prime){
        printf("%d is a prime number .\n" , number);
    }else{
        printf("%d is not prime number\n", number);
    }
    return 0;
}
