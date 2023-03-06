//source: https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/
/*

The code segment (also called a text segment), where the compiled program sits in memory. The code segment is typically read-only.

The bss segment (also called the uninitialized data segment), where zero-initialized global and static variables are stored.

The data segment (also called the initialized data segment), where initialized global and static variables are stored.

The heap, where dynamically allocated variables are allocated from.

The call stack, where function parameters, local variables, and other function-related information are stored.
The call stack

The call stack (usually referred to as “the stack”) has a much more interesting role to play. The call stack keeps track of all the active functions (those that have been called but have not yet terminated) from the start of the program to the current point of execution, and handles allocation of all function parameters and local variables.

The call stack is implemented as a stack data structure. So before we can talk about how the call stack works, we need to understand what a stack data structure is.

The stack data structure

A data structure is a programming mechanism for organizing data so that it can be used efficiently. You’ve already seen several types of data structures, such as arrays and structs. Both of these data structures provide mechanisms for storing data and accessing that data in an efficient way. There are many additional data structures that are commonly used in programming, quite a few of which are implemented in the standard library, and a stack is one of those.

The call stack in action

Let’s examine in more detail how the call stack works. Here is the sequence of steps that takes place when a function is called:

The program encounters a function call.
A stack frame is constructed and pushed on the stack. The stack frame consists of:
The address of the instruction beyond the function call (called the return address). This is how the CPU remembers where to return to after the called function exits.
All function arguments.
Memory for any local variables
Saved copies of any registers modified by the function that need to be restored when the function returns
The CPU jumps to the function’s start point.
The instructions inside of the function begin executing.
When the function terminates, the following steps happen:

Registers are restored from the call stack
The stack frame is popped off the stack. This frees the memory for all local variables and arguments.
The return value is handled.
The CPU resumes execution at the return address.
Return values can be handled in a number of different ways, depending on the computer’s architecture. Some architectures include the return value as part of the stack frame. Others use CPU registers.

Typically, it is not important to know all the details about how the call stack works. However, understanding that functions are effectively pushed on the stack when they are called and popped off (unwound) when they return gives you the fundamentals needed to understand recursion, as well as some other concepts that are useful when debugging.


*/

