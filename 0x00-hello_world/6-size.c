/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
printf(("Size of a char: %lu byte(s)\n"), (unsignedlong)sizeof(char));
printf(("Size of an int: %lu byte(s)\n"), (unsignedlong)sizeof(int));
printf(("Size of a long  int: %lu byte(s)\n"), (unsignedlong)sizeof(long int));
printf(("Size of a long long int: %lu byte(s)\n"), (unsignedlong)sizeof(long long int));
printf(("Size of a float: %lu byte(s)\n"), (unsignedlong)sizeof(float));

return (0);
}
