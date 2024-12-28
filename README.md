# Dangling Pointer and Memory Corruption in C

This repository showcases a common error in C programming involving dangling pointers and memory corruption. The example demonstrates the problem and provides a solution to avoid such issues. 

## Problem Description:

The `bug.c` file contains code that attempts to use a pointer after the memory it points to has been freed. This is a classic example of a dangling pointer. If the memory location pointed to is overwritten, this can lead to unexpected behavior and potential crashes or security vulnerabilities.

## Solution:

The `bugSolution.c` file presents a revised version of the code that eliminates the dangling pointer problem. It carefully manages memory allocation and pointer usage, ensuring that no attempts are made to access memory after it has been released.