#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type struct describing dog
 * @name: dog name, type = char *
 * @age: dog age, type = float
 * @owner: dog owner, type = char *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * typedef dog_t as a new name for the type struct dog.
 */

typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
