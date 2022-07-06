#ifndef DOG_H
#define DOG_H dog.h

/**
 *struct dog - entry point
 *@name: name of the dog
 *@age: age of the dog
 *owner: dog's owner
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
