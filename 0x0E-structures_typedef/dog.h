#ifndef DOG_H
#define DOG_H
/**
 * struct dog - estructura
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: propietario del perro
 *
 * Description: datos sobre el perro
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
