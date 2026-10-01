#include<stdio.h>
int main(){
   int a = 5;
   int* x ;; // this pointer x holds the address of variable a an holds a separate container
   x = &a;

   *x = 7;  // a is changed and important 
   printf("%d\n",a);
   printf("%d\n",&a); // it prints address in number form
   printf("%p\n",&a); // %p se address print hota hai
   printf("%p\n",x); // pointer x stores the address of variable a
   printf("%p\n",&x); // this prints the address of pointer itself
   printf("%d\n",*x); // pointer jis variable ko point kar raha hai usko print karo
    return 0;
}