#include<stdio.h>
int main(){


    double x1;
    printf("Enter the value of x1\n");
    scanf("%lf",&x1);

    double y1;
    printf("Enter the value of y1\n");
    scanf("%lf",&y1);

    double x2;
    printf("Enter the value of x2\n");
    scanf("%lf",&x2);

    double y2;
    printf("Enter the value of y2\n");
    scanf("%lf",&y2);

    double x3;
    printf("Enter the value of x3\n");
    scanf("%lf",&x3);

    double y3;
    printf("Enter the value of y3\n");
    scanf("%lf",&y3);

    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);

    if(m1==m2){
        printf("The slope lies on the same line");
    }
    else{
        printf("It is not lies on same plane");
    }
return 0;

}
