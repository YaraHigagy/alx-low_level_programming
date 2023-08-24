/*
* File: 6-size.c
*/

#include <stdio.h>

/**
 * main - Prints the size of various types on the computer it is compiled and run on.
 *
 *Return: Always 0 (Success)
 */

int  main(void)
{
/*
	char *arr[] = {"char", "int", "long int", "long long int", "float"};
	int i;
	
	for (i = 0; i < 5; i++)
	{
    		printf("Size of a $s: %zu byte(s)\n", arr[i], sizeof(arr[i]));
	}
*/
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	
	return (0);
}

