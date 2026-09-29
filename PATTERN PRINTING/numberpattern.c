#include <stdio.h>

int main() {
    int n = 4;

    int nsp= n-1;
    for (int i = 1; i <= n; i++) {
        int a=i-1;

        for(int q=1;q<=nsp;q++){
            printf("  ");
        }
        nsp--;

        for(int l =1 ;l<=i; l++){
            printf("%d ",l);
        }

        for (int j = 1; j <=i-1; j++) {
           
            printf("%d ",a );
            a--;
        }
     

        printf("\n");
    }

    return 0;
}