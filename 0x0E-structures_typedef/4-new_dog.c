#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * scopy - copy of string
 * @s: string
 * Return: pointer to string or nul
 */
char *scopy(char *s)
{
	unsigned int l;
	char *s1;

	if (!s)
		return (NULL);
	for (l = 0; s[l]; l++)
		;
	s1 = malloc(l + 1);
	if (!s1)
		return (NULL);
	do
		s1[l] = s[l];
	while (l--);
	return (s1);
}

/**
 * new_dog -  function that creates structure
 * @name: string
 * @age: float
 * @owner: string
 * Return: pointer to string or nul
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = scopy(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = scopy(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
