#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a new type
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
