/* Programming is the process of designing, writing, testing,
 and maintaining a set of instructions (called a program)
 that enables a computer to automatically
  perform specific tasks or solve problems. */


 /*Suppose you open Google and search for "1000 rupees to dollars." 
 You enter the value (1000), and Google instantly shows the result 
 in dollars. Similarly, if you search for the "area of an ellipse" 
 or the "volume of a sphere," you provide the required input
  (such as radius or the lengths of the axes), 
  and Google immediately calculates and displays the answer.

This happens because a program is running behind the scenes. 
The program takes the input, processes it using predefined formulas 
or logic, and produces the correct output automatically.

Therefore, a program is a set of instructions that automates 
a task by taking input, processing it according to defined rules, 
and generating the desired output without manual calculation. */


#include <stdio.h> // #include <stdio.h> includes the Standard Input/Output library,
                     // which provides functions like printf() and scanf().

/* Commenting is the practice of adding 
     explanatory notes or descriptions 
    inside a program to help humans understand the code. 
    Comments are ignored by the compiler or interpreter and 
    are not executed. */



// this is also a comment! :)


  
int main() // int main() is the starting point of a C program where execution begins.
            // also program executes line by line after main()
{
    printf("Hello World "); // printf() is used to display output on the screen.


    printf("\n"); /* Escape sequences are special character combinations used to perform
                    formatting tasks like a new line, tab space, or printing special characters. */

                        // \n - Moves the cursor to the next line.
                        // \t - Inserts a horizontal tab space.
                        // \" - Prints a double quotation mark (").
                        // \' - Prints a single quotation mark (').
                        // \\ - Prints a backslash (\).

                        
    printf("I am Hariom Nagar and i'm going to make comeback!\n"); // printf() prints text, numbers, or messages to the output screen.
    printf("This Year!");

    return 0; // return 0; ends the main() function and returns control to the operating system.
}    