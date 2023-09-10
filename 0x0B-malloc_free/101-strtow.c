#include <stdlib.h>

/**
 * count_word - count word form string
 * 		without spaces
 *
 * @str: string that holds word to count
 *
 * Return: number of word
 */

int count_word(char *str)
{
	int word_num = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			while (*str != ' ' && *str != '\0')
				str++;
			word_num++;
		}
	}
	return (word_num);
}

/**
 * free_arr - free the alocate it memory of str array
 *
 * @str:  str array to free
 * @i: index
 * 
 * Return: void
 */

void free_arr(char **str, int i)
{
	if ( str != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
}

/**
 * strtow - split a given string to word
 *
 * @str: a string to split
 *
 * Return: Null if it fails a pointer otherwise
 */

char **strtow(char *str)
{
	int i, j, space, str_len, word;
	char **str_word;

	if (str == NULL || *str == '\0')
		return NULL;

	str_len = count_word(str);
	str_word = malloc(sizeof(char *) * (str_len + 1));
	
	if (str_word == NULL || str_len == 0)
		return (NULL);

	for (i = space = 0; i < str_len; i++)
	{
		for (word = space; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				space++;
			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
			{
				str_word = malloc((word - space + 2) * sizeof(char));
			       if (str_word[i] == NULL)
			       {
				       free_arr(str_word, i);
				       return (NULL);
			       }
			}
		}
		for (j = 0; space <= word; space++, j++)
			str_word[i][j] = str[space];
		str_word[i][j] = '\0';
	}
	str_word[i] = NULL;

	return(str_word);
}
