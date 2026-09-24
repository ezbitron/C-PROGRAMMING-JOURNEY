#include<stdio.h>
int main()
{
   short a = - 32768;
   printf("%d",a);
}

/* short limit is -32768 to +32767
and only 2 bytes */
/*
1 short contains 2 bytes and
1 byte contain 8 bits so 1 short
contains 16 bits with the formula
n bits = 2^n numbers
16 bits = 2^16 numbers store in short 
which is equal to 65536 
so Negative: -32768
Positive: +32768 if we include zero also 
then it becomes -32768 to 32767
 */







 /*
32-bit Signed Integer Range

Total Bits = 32

Total Possible Values = 2^32
                      = 4,294,967,296

A signed integer stores both negative and positive numbers.

Out of these 4,294,967,296 values:
- Half are used for negative numbers.
- The remaining half are used for zero and positive numbers.

Negative Values = 2,147,483,648
Zero + Positive Values = 2,147,483,648

Therefore, the range of a signed 32-bit integer is:

Minimum Value = -2,147,483,648
Maximum Value = +2,147,483,647

Why is the maximum not +2,147,483,648?

Because one value is reserved for 0.

Distribution:

Negative Numbers : -2,147,483,648 to -1
Zero             : 0
Positive Numbers : 1 to 2,147,483,647

Hence,

Signed 32-bit Integer Range:
-2,147,483,648  to  +2,147,483,647

Examples:
2147483647   // Largest 32-bit signed integer
-2147483648  // Smallest 32-bit signed integer
*/