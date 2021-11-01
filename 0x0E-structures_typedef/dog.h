#ifndef PERRO
#define PERRO
/**
 * struct dog - informacion de un perro
 * @name:Nombre del perro
 * @age:Edad del perro
 * @owner:Dueño del perro.
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
