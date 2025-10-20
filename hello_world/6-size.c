#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Afficher la taille en bytes de plusieurs variables
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charsize = sizeof(char);
	int intsize = sizeof(int);
	int longintsize = sizeof(long int);
	int longlongintsize = sizeof(long long int);
	int floatsize = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charsize);
	printf("Size of an int: %d byte(s)\n", intsize);
	printf("Size of a long int: %d byte(s)\n", longintsize);
	printf("Size of a long long int: %d byte(s)\n", longlongintsize);
	printf("Size of a float: %d byte(s)\n", floatsize);
	return (0);
}
