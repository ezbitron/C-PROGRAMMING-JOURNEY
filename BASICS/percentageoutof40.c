#include <stdio.h>
int main()
{
    float chem = 37;
    float bio =39;
    float phy = 38;
    float math = 31;

    float per =  100*(chem + bio + phy + math)/160;
    printf("%f",per);

    return 0;
}     