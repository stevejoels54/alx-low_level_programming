#include "main.h"
#include <stdlib.h>

int count_words(char *str);

/**
 * count_words - counts the number of words contained within a string.
 * @str: string to be processed.
 * Return: number of words contained in passed string.
 */

int count_words(char *str)
{
	int i, words;

	words = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			words++;
		}
	}

	return (words);
}


/**
 * strtow - splits passed string into words.
 * @str: string to be split.
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - pointer to an array of string
 */

char **strtow(char *str)
{
	char **arr;
	int i, j, k, m, n, len, words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	words = count_words(str);

	if (words == 0)
		return (NULL);

	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < words; i++)
	{
		while (str[k] == ' ')
			k++;
		m = k;
		while (str[m] != ' ' && str[m] != '\0')
			m++;
		n = m - k;
		arr[i] = malloc((n + 1) * sizeof(char));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < n; j++)
		{
			arr[i][j] = str[k];
			k++;
		}
		arr[i][j] = '\0';
		k = m;
	}
	arr[i] = NULL;
	return (arr);
}
