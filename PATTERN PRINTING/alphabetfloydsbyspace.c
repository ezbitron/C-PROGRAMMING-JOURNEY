#include<stdio.h>
int main(){
    int n=4;

    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i;j++){
            printf("# ");
        }

        char ch= 64+i;

       for(int k=1;k<=i;k++){
       
        

            printf("%c ",ch);
            ch++;
        
       }
        printf("\n");
    }
    return 0;
}