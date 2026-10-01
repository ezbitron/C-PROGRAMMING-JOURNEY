#include <stdio.h>
int main()
{
    int ram;
    printf("Enter Ram's age\n");
    scanf("%d",&ram);

    int shyam;
    printf("Enter Shyam's age\n");
    scanf("%d",&shyam);


    int ajay;
    printf("Enter Ajay's age\n");
    scanf("%d",&ajay);

   if(ram==shyam==ajay)
   {
    printf("All three are equal");
   }
   else if(ram<shyam && ram<ajay)
   {
    printf("Ram is youngest");
   }
   else if(shyam<ram && shyam<ajay){
    printf("Shyam is youngest");
   }
   else {
    printf("Ajay is youngest");
    return 0;
  }
}