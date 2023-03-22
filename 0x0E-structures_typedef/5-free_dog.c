#include "dog.h"
#include "main.h"
#include <stdlib.h>

/**
* free_dog - frees doggo
* @d: dog to free
*/


void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}}
