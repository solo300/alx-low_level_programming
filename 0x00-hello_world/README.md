0 gcc -E $CFILE -o c (->)Write a script that runs a C file through the preprocessor and save the result into another file.
1 gcc -c $CFILE (->)Write a script that compiles a C file but does not link.
2 gcc -S $CFILE (->)Write a script that generates the assembly code of a C code and save it in an output file.
3 gcc $CFILE -o cisfun (->)Write a script that compiles a C file and creates an executable named cisfun.
4 -
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
 (->)Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
5 -
#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
 (->)Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
6 -
#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
 (->)Write a C program that prints the size of various types on the computer it is compiled and run on.
7 gcc -S -masm=intel $CFILE (->)Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
8 -
 #include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
 (->)Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
