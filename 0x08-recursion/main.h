#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char x);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt_recursive_helper(int n, int start, int end);
int is_prime_number(int n);
int _is_prime_recursive(int n, int i);
int is_palindrome(char *s);
int _strlen_recursion(char *s);
int _is_palindrome_recursive(char *s, int start, int end);
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */
