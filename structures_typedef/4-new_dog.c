#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *doggy;

	nlen = olen = 0;

	while (name[nlen++])
		;
	while (owner[olen++])
		;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->name = malloc(nlen * sizeof(doggy->name));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(doggy->owner));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}