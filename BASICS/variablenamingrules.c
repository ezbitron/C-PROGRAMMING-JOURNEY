/*
Variable Naming Rules

1) Variables can start with an alphabet or underscore (_).
2) Special characters except underscore (_) are not allowed.
3) Reserved keywords cannot be used as variable names.
4) Spaces and commas are not allowed in variable names.
*/


/*
Common Special Characters

!  @  #  $  %  ^  &  *  (  )
-  +  =  {  }  [  ]  |  \  /
:  ;  "  '  <  >  ,  .  ?  ~

Note:
Only the underscore (_) is allowed in variable names.
All other special characters are not allowed.
*/


/*
Keywords in C

Keywords are reserved words with predefined meanings.
They are used to perform specific operations in a program.
Keywords cannot be used as variable names, function names,
or any other user-defined identifiers.

There are 32 keywords in C:

auto      break     case      char
const     continue  default   do
double    else      enum      extern
float     for       goto      if
int       long      register  return
short     signed    sizeof    static
struct    switch    typedef   union
unsigned  void      volatile  while
*/



/*
VALID VARIABLE NAMES (✓)

✓ BASICSALARY       // Starts with a letter.
✓ _basic           // Starts with an underscore (_).
✓ mindovermatter   // Contains only letters.
✓ hELLO            // Uppercase and lowercase letters are allowed.
✓ 2015_DDA ❌      // Invalid (starts with a number, despite underscore).
*/


/*
INVALID VARIABLE NAMES (✗)

✗ basic-hra          // Hyphen (-) is not allowed.
✗ #MEAN             // '#' is a special character.
✗ group.            // '.' is not allowed.
✗ 422               // Cannot start with a digit.
✗ population in 2006 // Spaces are not allowed.
✗ over time         // Spaces are not allowed.
✗ FLOAT             // Considered invalid here because it represents the keyword 'float' (C keywords are lowercase and case-sensitive, so technically FLOAT is valid in C, but many teaching slides mark it invalid to discourage confusion).
✗ queue.            // '.' is not allowed.
✗ team'svictory     // Apostrophe (') is not allowed.
✗ Plot#3            // '#' is not allowed.
✗ 2015_DDA          // Cannot start with a digit.
*/





/*
Q. Which of the following statements is false?

✗ (1) Each new C instruction has to be written on a separate line.
   // False: C does NOT require each statement to be on a new line.
   // Multiple statements can be written on the same line if they are
   // separated by semicolons (;).

✓ (2) Usually all C statements are entered in small (lowercase) letters.
   // True: Although C is case-sensitive, programmers usually write
   // keywords in lowercase (e.g., int, float, return).

✓ (3) Blank spaces may be inserted between two words in a C statement.
   // True: Spaces can be used between tokens for better readability.
   // Example: int a = 10; and int    a=10; are both valid.

✓ (4) Blank spaces cannot be inserted within a variable name.
   // True: Variable names cannot contain spaces.
   // Example: total marks ❌
   //          total_marks ✅
*/