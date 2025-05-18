#include <stdio.h>
#include <stdlib.h>
int main(){
    int n_term = 0;
    int term = 0 ;
    int i =0 ;
    int s = 0 ;
    printf("Entering Number: ");
    scanf("%d",&n_term);
    for (i = 1 ; i<= n_term ; ++i){
        term = 1 + ( term * 10);
        s+= term;
        printf("%d ", term);
    }
    printf("%d",s);
    return 0;
}
