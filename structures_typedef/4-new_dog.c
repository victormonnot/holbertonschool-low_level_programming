#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * mon_strdup - .
 * @s: .
 * Return: .
 */
static char *mon_strdup(const char *s)
{
	int len = strlen(s) + 1;
	char *dup = malloc(len);

	if (dup)
		memcpy(dup, s, len);
	return (dup);
}

/**
 * new_dog - crée un nouveau chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 * Return: pointeur
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->name = mon_strdup(name);

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = mon_strdup(owner);

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	p->age = age;

	return (p);
}
