#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - crée un nouveau chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 * Return: pointeur
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *copienom;
	char *copieowner;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	copienom = malloc(strlen(name) + 1);

	if (copienom == NULL)
	{
		free(dog);
		return (NULL);
	}

	strcpy(copienom, name);

	copieowner = malloc(strlen(owner) + 1);

	if (copieowner == NULL)
	{
		free(copienom);
		free(dog);
		return (NULL);
	}

	strcpy(copieowner, owner);

	dog->name = copienom;
	dog->age = age;
	dog->owner = copieowner;

	return (dog);
}
