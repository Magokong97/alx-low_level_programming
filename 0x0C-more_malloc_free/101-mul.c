#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
int i, j;
int len1 = 0, len2 = 0;
int *result;
int carry = 0;

if (argc != 3)
{
printf("Error\n");
return (98);
}
for (i = 0; argv[1][i]; i++)
if (!_isdigit(argv[1][i]))
{
printf("Error\n");
return (98);
}
for (i = 0; argv[2][i]; i++)
if (!_isdigit(argv[2][i]))
{
printf("Error\n");
return (98);
}
while (argv[1][len1 + 1])
len1++;
while (argv[2][len2 + 1])
len2++;
result = calloc(len1 + len2 + 1, sizeof(int));
if (!result)
return (1);
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
carry += result[i + j + 1] + ((argv[1][i] - '0') *
                                           (argv[2][j] - '0'));
result[i + j + 1] = carry % 10;
carry /= 10;
}
if (carry)
result[i + j + 1] += carry;
}
for (i = (*result == 0); i < len1 + len2; i++)
printf("%d", result[i]);
printf("\n");
free(result);
return (0);
}
