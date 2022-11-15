#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - funtion that frees dog
 * @d: dog to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
