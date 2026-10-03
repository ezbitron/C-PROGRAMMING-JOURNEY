#include<stdio.h>

void tower(int n, char so, char hel, char dest){
    if(n==0) return;
    tower(n-1,so,dest,hel);
    printf("%c -> %c\n",so,dest);
    tower(n-1,hel,so,dest);
    return;

}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    tower(n,'A','B','C');

    return 0;
}