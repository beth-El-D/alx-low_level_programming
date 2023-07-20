#define < stdlib.h >
#define "dog.h"

/**
 * init_dog - initialize a variablr of type struct dog
 * @d: pointer to a struct dog to initialize
 * @name: name to initialize
 * @age: age toinitialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name; float age, char *owner)
{
	if (d == NULL)
		d = maloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
