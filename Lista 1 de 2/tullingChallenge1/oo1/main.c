#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0 ; int number = 0 ;
    printf("Type one number : ");
    scanf("%d",&number);
    for(i = 1 ; i <=12 ; i++){
        printf("%d X %d = %d\t\n", number , i , number * i );
    }
    return 0;
}
