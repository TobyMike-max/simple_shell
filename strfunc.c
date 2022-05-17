#include "shell.h"

/**
 * _puts = Writes a string to standard output
 * @str: string to write
 *
 * Return: Number of chars printed or
 * -1 on failure
 */
ssize_t _puts(char *str)
{
	ssize_t num, len;

	num = _strlen(str);
	len = write(STDOUT_FILENO, str, num);
	if (len != num)
	{
		perror("Fatal Error");
		return (-1);
	}
	return (len);
}

/**
 * _strdup - Duplicates an array of characters
 * @str: A string to be duplicated
 * Return: A pointer to the new duplicated string
 */
char *_strdup(char *str)
{
	char *copy;

	int len, i;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;
	copy = malloc((len + 1) * sizeof(char));

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}


/**
 * _strcmpr - Compares two strings
 * @strcmp1: first string to be compared in length
 * @strcmp2: second string to be compared
 * Return: 0 on success
 */
int _strcmpr(char *strcmp1, char *strcmp2)
{
	int i = 0;

	while (strcmp1[i] == strcmp2[i])
	{
		if (strcmp1[i] == '\0')
			return (0);
		i++;
	}
	return (strcmp1[i] - strcmp2[i]);
}


/**
 * _strcat - Concatenates two strings
 * @strc1: First string
 * @strc2: Second string
 * Return: Pointer to concatenated string
 */
char *_strcat(char *strc1, char *strc2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, newlen, i, j;

	if (strc1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; strc1[len1]; len1++)
			;
	}
	if (strc2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; strc2[len2]; len2++)
			;
	}
	newlen = len1 + len2 + 2;
	concat_str = malloc(sizeof(char) * newlen);
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat_str[i] = strc1[i];
	concat_str[i] = '/';
	for (j = 0; j < len2; j++)
		concat_str[i + j + 1] = strc2[j];
	concat_str[len1 + len2 + 1] = '\0';
	return (concat_str);
}


/**
 * _strlen - Finds the length of a string
 * @str: String to find length
 * Return: Length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	for (len = 0; str[len]; len++)
		;
	return (len);
}
