#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {

        for(int l =1 ;l<=n-i; l++){
            printf("  ");
        }

        for (int j = 1; j <= 2*i-1; j++) {
            
            printf("* ");
        }
     

        printf("\n");
    }

    return 0;
}