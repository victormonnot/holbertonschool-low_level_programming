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
	int len = 0;
	int i;
	char *dup;

	while (s[len] != '\0')
	{
		len++;
	}
	len++;

	dup = malloc(len);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = s[i];
	}

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
