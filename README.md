QueueOperations-C
=================

Welcome to the QueueOperations-C repository! This project provides a comprehensive implementation of queue operations for different data types (int, float, char). You can use this to handle queue-based operations in C programs with ease.

Clone the Repository
--------------------

To get started, you can clone the repository using the following link:

    git clone https://github.com/souhardyaghosh/QueueOperations-C.git

Setting Up
----------

After cloning, navigate to the repository directory:

    cd QueueOperations-C

Ensure that the header file `queue_func.h` is in the same directory as your source code file when you compile and run the program.

### Compiling and Running

If you have GCC installed, you can directly compile the program with the following command:

    gcc main.c -o main && ./main

If GCC is not installed, follow these steps to install it:

    # On Ubuntu
    sudo apt update
    sudo apt install gcc
    
    # On Windows (via MinGW)
    pacman -S mingw-w64-gcc

Functions Overview
------------------

### Integer Queue Functions

*   `void pushI(int value)` - Pushes an integer value onto the queue.
*   `int popI()` - Pops an integer value from the queue.
*   `void printQueueI()` - Prints all integer values in the queue.

### Float Queue Functions

*   `void pushF(float value)` - Pushes a float value onto the queue.
*   `float popF()` - Pops a float value from the queue.
*   `void printQueueF()` - Prints all float values in the queue.

### Char Queue Functions

*  `void pushC(char value)` - Pushes a char value onto the queue.
*   `char popC()` - Pops a char value from the queue.
*   `void printQueueC()` - Prints all char values in the queue.

How to Use
----------

Here’s an example of how to use the queue functions in your `main.c` file:

    #include "queue_func.h"
    
    int main() {
        initQueue();

        pushI(10);
        pushI(20);
        printQueueI(); // Output: 10 20

        printf("Popped int: %d\n", popI());
        clearQueue();

        return 0;
    }

Contributing
------------

This project is open to contributions! Feel free to fork the repo, make changes, and submit a pull request. We welcome any improvements or new features you would like to propose.

Contact me via GitHub or email if you have any questions or suggestions.

[Visit the GitHub Repository](https://github.com/souhardyaghosh/QueueOperations-C.git)
