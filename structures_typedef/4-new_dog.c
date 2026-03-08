#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy;
	char *owner_copy;
	unsigned int i, len_name = 0, len_owner = 0;
	if (name == NULL || owner == NULL) return (NULL);
	while (name[len_name] != '\0') len_name++;
	while (owner[len_owner] != '\0') len_owner++;
	d = malloc(sizeof(dog_t));
	if (d == NULL) return (NULL);
	name_copy = malloc(len_name + 1);
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++) name_copy[i] = name[i];
	owner_copy = malloc(len_owner + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
		owner_copy[i] = owner[i];
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);
}
