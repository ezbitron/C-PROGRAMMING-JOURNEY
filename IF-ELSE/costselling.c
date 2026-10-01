#include<stdio.h>
int main(){
    int cost;
    printf("Enter cost price : ");
    scanf("%d",&cost);

     int selling;
    printf("Enter selling price : ");
    scanf("%d",&selling);

    if(cost==selling){
        printf("No profit, No loss");
    }
    else {
        if(selling>cost){
            printf("The seller has made profit of %d",selling-cost);
        }
        else{
            printf("The seller has made loss of %d",cost-selling);
        }
    }
    return 0;
}