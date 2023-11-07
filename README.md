# C# Program
### I've started a journey to explore C programming, a language renowned for its low-level control and real-time capabilities.
#### In the exciting realm of mechatronics, where the combination of mechanical, electrical, and software engineering transforms ideas into automated reality, mastering C programming is a pivotal skill.
##### This programming knowledge will empower me to craft precise, responsive software for the mechatronic systems of the future. During my bachelor's study in 2015, I was introduced to the Basics of C# program which was the first time I operated a computer on my own.
        
 
#### Basic Idea in C:
- Input/output in C can be achieved using scanf( ) and printf( ) functions.
- A C program can contain three types of instructions—Type declaration instruction, Arithmetic instruction, Control instruction.
- Remember that out of the two/four bytes used to store an integer, the highest bit (16th/32nd bit) is used to store the sign of the integer. This bit is 1 if the number is negative and 0 if the number is positive
-  By default all the variables are signed. We can declare a variable as unsigned to accommodate bigger value without increasing the bytes occupied.

#### Decision Making
- There are three ways for taking decisions in a program. First way is to use the if-else statement, second way is to use the conditional operators and third way is to use the switch statement.
- The condition associated with an if statement is built using relational operators <, >, <=, >=, == and !=.
-  An if-else statement can be nested inside another if-else statement.
- An ‘if block’ need not always be associated with an ‘else block’. However, an ‘else block’ must always be associated with an if.
- && and || are binary operators, whereas, ! is a unary operator
-  Conditional operators can be used as an alternative to if-else statement if there is a single statement in the ‘if block’ and a single statement in the ‘else block’
#### Loop
- three methods by way of which we can repeat a part of a program. They are:
    (a) Using a **for **statement
    (b) Using a** while** statement
    (c) Using a **do-while** statement
- In a while loop there are three distinct steps of initialization, testing and incrementation of loop counter.
- Post increment = **i++** ;pre-increment = **++i**; similarly post decrement = **i--**
- Unlike a while loop, in a for loop the initialization, test and incrementation are written in a single line.
-  A **break** statement takes the execution control out of the loop.
-  A **continue** statement skips the execution of the statements after it and takes the control through the next cycle of the loop.
-  A do-while loop is used to ensure that the statements within the loop are executed at least once.
-  The while tests the condition before executing any of the statements within the while loop. But, the do-while tests the condition after having executed the statements within the loop

#### compound assignment operators
    +=, -=, *=, /=, %= 
    
#### Conditional Operators:
- The conditional operators ? and : are sometimes called ternary operators since they take three arguments
      **syntax**: expression 1(condition) **?** expression 2 (print this if condition true) **:** expression 3  (print this if condition fails)
  
#### switch-case-control:
- The control statement that allows us to make a decision from the number of choices is called a switch, or more correctly a **switch-case-default**
- Every statement in a switch must belong to some case or the other. If a statement doesn’t belong to any case, the compiler won’t report an error.
- The switch keyword is followed by an integer or an expression that evaluates to an integer. The case keyword is followed by an integer or a character constant.
- 
#### Function
- To avoid repetition of code and bulky programs functionally related statements are isolated into a function.
- Function declaration specifies the return type of the function and the types of parameters it accepts. 
- Function definition defines the body of the function.
- Variables declared in a function are not available to other functions in a program. So, there won’t be any clash even if we give same name to the variables declared in different functions. 
- In C order of passing arguments to a function is from right to left.
-  A function can call itself. Such a process is called ‘recursion’.
-  parameters also known as Arguments are passed inside the function. Actual Arguments are inside the main() function and formal arguments are in defined function.

#### Pointers
- pointers are variables that contain addresses, and since addresses are always whole numbers, pointers would always contain whole numbers.
- A pointer to a pointer is a variable that holds the address of a pointer variable.
- The '&' operator fetches the address of the variable in memory.
- The * operator lets us access the value present at an address in memory with an intention of reading it or modifying it.
- A function can be called either by value or by reference.
- Pointers can be used to make a function return more than one value simultaneously in an indirect manner.
- Arguments can generally be passed to functions in one of the two ways:
    - sending the values of the arguments
    - sending the addresses of the arguments
#### Recursion:
- A function is called ‘recursive’ if a statement within the body of a function calls the same function
- if you are to store five numbers then we can store them in five different variables, an array, a linked list, a binary tree, etc. All these different ways of organizing the data are known as data structures
- A stack is a Last In First Out (LIFO) data structure
- 
#### storage classes in C: 
- Automatic storage class 
    - Storage: Memory.
    - Default value: An unpredictable value, often called a garbage value.
    - Scope: Local to the block in which the variable is defined.
    - Life: Till the control remains within the block in which the variable is defined.
- Register storage class 
    - Storage: CPU registers.
    - Default value: Garbage value.
    - Scope: Local to the block in which the variable is defined.
    - Life: Till the control remains within the block in which the variable is defined.
- Static storage class
    - Storage: Memory.
    - Default value: Zero.
    - Scope: Local to the block in which the variable is defined.
    - Life: Value of the variable persists between different function calls
- External storage class
    - Storage: Memory.
    - Default value: Zero.
    - Scope: Global.
    - Life: As long as the program’s execution doesn’t come to an end
 
      - Use static storage class only if you want the value of a variable to persist between different function calls.  
      -  Use register storage class for only those variables that are being used very often in a program. Reason is, there are very few CPU registers at our disposal and many of them might be busy doing something else. Make careful utilization of the scarce resources. A typical application of register storage class is loop counters, which get used a number of times in a program. 
      - Use extern storage class for only those variables that are being used by almost all the functions in the program. This would avoid unnecessary passing of these variables as arguments when making a function call. Declaring all the variables as extern would amount to a lot of wastage of memory space because these variables would remain active throughout the life of the program. 
      - If you don’t have any of the express needs mentioned above, then use the auto storage class. In fact, most of the times, we end up using the auto variables. This is because once we have used the variables in a function and are returning from it, we don’t mind losing them. 
#### Data Types - Bytes - Format - Range
    - signed char - 1 byte - %c =>  -128  to  +127
    - unsigned char - 1 byte - %c => 0  to  255
    - short signed int - 2 bytes - %d => -32768  to  +32767
    - short unsigned int - 2 bytes - %u => 0  to  65535-
    - signed int - 4 bytes - %d =>  -2147483648  to  +2147483647
    - unsigned int - 4 bytes - %u =>  0  to  4294967295
    - long signed int - 4 bytes - %ld => -2147483648  to  +2147483647
    - long unsigned int  - 4 bytes - %lu =>  0  to  4294967295
    - float - 4 bytes - %f => -3.4e38  to +3.4e38
    - double - 8 bytes - %lf => -1.7e308  to  +1.7e308
    - long double - 10 bytes - %Lf => -1.7e4932  to  +1.7e4932

#### Preprocessor
- Before a C program is compiled it is passed through another program called ‘Preprocessor’. The preprocessor offers several features called preprocessor directives. Each of these preprocessor directives begins with a # symbol
- following preprocessor  directives are in C
  1. Macro expansion
  2. File inclusion 
  3. Conditional compilation 
  4. Miscellaneous directives
- The preprocessor directives enable the programmer to write programs that are easy to develop, read, modify and transport to a different computer system.
 
###### Macro Expansion:
- #define PI 3.1415
        - PI in the above programs are often called ‘macro templates’, whereas, 25 and 3.1415 are called their corresponding ‘macro expansions’
- A #define directive is many a time used to define operator.
- A #define directive could be used even to replace a condition
- A #define directive could be used to replace even an entire C statement

- Usually macros make the program run faster but increase the program size, whereas functions make the program smaller and compact.
##### File Inclusion:
- #nclude "filename" =>  it simply causes the entire contents of filename to be inserted into the source code at that point in the program
- Actually there exist two ways to write #include statement.
   - #include "mylib.h"
      - This command would look for the file mylib.h in the current directory as well as the specified list of directories as mentioned in the include search path that might have been set up. 
   - #include <mylib.h> 
      - This command would look for the file mylib.h in the specified list of directories only.
##### Conditional Compiation
- if we want, have the compiler skip over part of a source code by inserting the preprocessing commands #ifdef and #endif
- The #if directive can be used to test whether an expression evaluates to a non-zero value or not. If the result of the expression is non-zero, then subsequent lines upto a #else, #elif or #endif re compiled, otherwise they are skipped

##### Miscellaneous directives
- There are two more preprocessor directives available, though they are not very commonly used. They are: 
 (a) #undef 
 (b) #pragma


- We can make use of various preprocessor directives, such as #define, #include, #ifdef - #else - #endif, #if and #elif in our program.


#### steps involved in converting a C program into an executable form.

        - C Source code (PR1.C)
            Preprocessor          ( the C source code is expanded based on the preprocessor directives like #define, #include, #ifdef, etc)
        - Expanded source code (PR1.I)
             Compiler             (Here identifies the syntax errors in the expanded source code)
        -  Assembly code (PR1.ASM)
             Assembler            (Here,  translate .ASM program into Relocatable object code .The .OBJ file that gets created is a specially formatted binary file.)
        - Relocatable Object code        and          -  Object code of Library Functions
             Linker
        - Executable code (PR1.EXE)

#### Array:
- An array is a collective name given to a group of ‘similar quantities’ i.e, An array is a collection of similar elements.
- The first element in the array is numbered 0, so the last element is 1 less than the size of the array.
- An array is also known as a subscripted variable. 
- Before using an array, its type and dimension must be declared. 
- However big an array, its elements are always stored in contiguous memory locations
- Array elements can be passed to a function by calling the function by value (i.e, pass array elements), or by reference (i.e, pass addresses of array elements)
- A pointer when incremented always points to an immediately next location of its type.
- Compiler doesn’t perform bounds checking on an array.

