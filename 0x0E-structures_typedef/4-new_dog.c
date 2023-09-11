#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a dog
 * @name: name of the do
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, own_len, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	for (name_len = 0; name[name_len]; name_len++)
		;
	name_len++;
	dog->name = malloc(name_len * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (own_len = 0; owner[own_len]; own_len++)
		;
	own_len++;
	dog->owner = malloc(own_len * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < own_len; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
