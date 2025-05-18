#include <stdio.h>
#include <stdlib.h>
int main(){
    int _value = 0;
    int i = 0;
    int z = 0 ;
    printf("Type the value : ");
    scanf("%d", &_value);
    for(i = 1 ; i <= _value ; i++){
        printf("\n");
        for(z = _value ; z >= i ; z--){
            printf("*\t");
        }
    }
    return 0;
}
