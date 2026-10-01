#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates : \n");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("The point is origin");
    }
    else if(x==0){
        printf("lies on y_ axis");
    }
    else if(y==0){
        printf("lies on x axis");
    }
    printf("The point does not lie on any axis or origin");


    return 0;
}