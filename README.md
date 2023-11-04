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
    (a) sending the values of the arguments
    (b) sending the addresses of the arguments
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
    Storage: CPU registers.
    Default value: Garbage value.
    Scope: Local to the block in which the variable is defined.
    Life: Till the control remains within the block in which the variable is defined.
- Static storage class
    Storage: Memory.
    Default value: Zero.
    Scope: Local to the block in which the variable is defined.
    Life: Value of the variable persists between different function calls
- External storage class
      Storage: Memory.
    Default value: Zero.
    Scope: Global.
    Life: As long as the program’s execution doesn’t come to an end
