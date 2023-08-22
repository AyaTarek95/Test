#include "dog.h"
/**
 * _strlen - calculates function length
 * @s: string which get its length calculated
 * retur: s length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
return (i);
}

/**
 * _strcpy - copies scr conent into dest
 * @scr: string to be copied
 * @dest: destination of content copied
 * Return: dest
 */
char *_strcpy(char *dest, char *scr)
{
	int i, len = 0;

	while (scr[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = scr[i];
	}

	dest[i] = '\0';
return (dest);
}
/**
 * new_dog: creates new dog variable
 * @name: dog's name
 * @owner: dog's owner name
 * @age: age of the dog
 * return: pointer to new dog variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog1;
	int len1 = _strlen(name), len2 = _strlen(owner);

	new_dog1 =malloc(sizeof(dog_t));
	if (new_dog1 == NULL)
	{	return (NULL);
	}
		new_dog1->name  = malloc(sizeof(char) * (len1 + 1));
	if (new_dog1->name == NULL)
	{		free(new_dog1);
		return (NULL);
}
	new_dog1->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dog1->owner == NULL)
	{		free(new_dog1);
		free(new_dog1->name);
		return (NULL);
}	
	_strcpy(new_dog1->name, name);
	_strcpy(new_dog1->owner, owner);
	new_dog1->age = age;
	return (new_dog1);
}


