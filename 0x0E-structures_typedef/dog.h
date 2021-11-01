#ifndef DOG_H
#define DOG_H

#include <stdio.h>

int _putchar(char c);
/**
 * struct dog - dog characteristics
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void p_null_notnull(char *f, char *v);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *scopy(char *s);

#endif /* MAIN_H */
