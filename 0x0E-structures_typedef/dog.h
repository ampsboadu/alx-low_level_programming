#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedof dog struct
 */

typedef struct dog dog_t;

/**
 * struct dog -structure for storing dogs data
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
