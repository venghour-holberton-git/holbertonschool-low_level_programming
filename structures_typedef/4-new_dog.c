#include <stdlib.h>
#include <string.h>
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
    size_t len_name, len_owner;

    if (name == NULL || owner == NULL)
        return (NULL);

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    len_name = strlen(name) + 1;
    name_copy = malloc(len_name);
    if (name_copy == NULL)
    {
        free(d);
        return (NULL);
    }
    strcpy(name_copy, name);

    len_owner = strlen(owner) + 1;
    owner_copy = malloc(len_owner);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(d);
        return (NULL);
    }
    strcpy(owner_copy, owner);

    d->name = name_copy;
    d->age = age;
    d->owner = owner_copy;

    return (d);
}
