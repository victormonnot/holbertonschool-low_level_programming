#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free un chien
 * @d: pointeur vers le dog_t à libérer
 *
 * Return: .
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
