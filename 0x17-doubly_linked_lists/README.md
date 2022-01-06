![](https://scontent.fbog4-1.fna.fbcdn.net/v/t39.30808-6/271153206_3074657909465585_6907762404450913633_n.jpg?_nc_cat=105&_nc_rgb565=1&ccb=1-5&_nc_sid=730e14&_nc_ohc=7IqN72eeoDwAX9bX3Qr&_nc_ht=scontent.fbog4-1.fna&oh=00_AT_Rjbyy3hyaq21IT0ZPHgwMs7BFAEd-ngb_QF3wpZnDnw&oe=61DD39C0)

# 0x17. C - Doubly linked lists


------------

|  Archives | what does this file do?  |
| ------------ | ------------ |
|  0-print_dlistint.c  | Write a function that prints all the elements of a dlistint_t list. |
| 1-dlistint_len.c | Write a function that returns the number of elements in a linked dlistint_t list. |
| 2-add_dnodeint.c | Write a function that adds a new node at the beginning of a dlistint_t list. |
| 3-add_dnodeint_end.c | Write a function that adds a new node at the end of a dlistint_t list. |
| 4-free_dlistint.c | Write a function that frees a dlistint_t list. |
| 5-get_dnodeint.c | Write a function that returns the nth node of a dlistint_t linked list. |
| 6-sum_dlistint.c | Write a function that returns the sum of all the data (n) of a dlistint_t linked list. |
| 7-insert_dnodeint.c | Write a function that inserts a new node at a given position. |
| 8-delete_dnodeint.c | Write a function that deletes the node at index index of a dlistint_t linked list. |

------------

|  Archives | comments   |
| ------------ | ------------ |
|  0-print_dlistint.c  | Recorremos la lista usando el puntero a la misma y imprimos |
|  1-dlistint_len.c | Recorremos la lista y retornamos la cantidad de elementos de la misma |
| 2-add_dnodeint.c | Generamos el espacio en memoria y agregamos el nodo |
| 3-add_dnodeint_end.c | Reservamos espacio de memoria seguidamente agregamos el contenido al nuevo nodo y lo mandamos verificando si es nulo |
| 4-free_dlistint.c | Liberamos la memoria con free |
| 5-get_dnodeint.c | Recorremos la lista y busca igualdad entre el index y el contador para returnar la busqueda |
| 6-sum_dlistint.c  | Solo sumo y ya we |
| 7-insert_dnodeint.c | Si el indice es 0 creamos un nuevo nodo y se hace un for para recorrer hasta que llegue a nul y si es el caso se crea al final de la lista, seguido usamos malloc y agregamos el nodo |
| 8-delete_dnodeint.c |  |

------------

![](https://scontent.fbog4-2.fna.fbcdn.net/v/t39.30808-6/270559680_3074660106132032_2239355789427321092_n.jpg?_nc_cat=111&_nc_rgb565=1&ccb=1-5&_nc_sid=730e14&_nc_ohc=kJ-RuSOu-iIAX9z9h-Z&_nc_ht=scontent.fbog4-2.fna&oh=00_AT_3Q9zp7oV3NV6dvSZI8GxrmM07Lrar12nk4qhAJoWyyw&oe=61DB55A7)