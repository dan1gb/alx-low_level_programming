#include "main.h"
#include "dog.h"

/**
* init_dog - initializes doggo
* @d: address of dog
* @name: name of dog
* @age: umri
* @owner: dog owner
*/





void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
