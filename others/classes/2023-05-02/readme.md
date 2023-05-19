# Function

## Call by value

## Call by reference (call by address)

> int sum(int *a, int *b);

> int sum(int *, int *);

<br>

# Pointer

## What is pointer ?

memory address

- Every bit has a unique address
- Address is an unsigned integer.

| variable name | value | bite        |
| ------------- | ----- | ----------- |
|               |       | 0           |
|               |       | 1           |
|               |       | 2           |
|               |       | .           |
|               |       | .           |
| a             | 4     | 19          |
|               |       | .           |
|               |       | .           |
| p             | 19    | 31          |
|               |       | .           |
|               |       | .           |
|               |       | $2^{31} -1$ |

>- "\*" value at
>- "&" address of

<br>

# Questions

1. Write a c program to perform addition of two numbers using call by reference technique.