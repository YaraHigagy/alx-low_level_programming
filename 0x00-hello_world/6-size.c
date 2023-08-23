/*
* File: 6-size.c
*/

#include <stdio.h>

/*
* main - Prints the size of various types on the computer it is compiled and run on.

Return: Always 0 (Success)
*/
int  main(void)
{
	char *arr[] = {"char", "int", "long int", "long long int", "float"}
	for (int i = 0; i < 5; i++)
	{	
		printf("Size of a %s: %zu byts(s)\n", arr[i], sizeof(arr[i]));	
	}
	return (0);
}

