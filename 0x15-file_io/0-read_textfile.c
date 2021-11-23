#include "main.h"
/**
 * read_textfile - Lee un archivo de texto y lo imprime.
 * @filename: Nombre del archivo a leer.
 * @letters: Numero de letras para leer y impirmir.
 * Return: Número de letras impresas, o 0 si falló.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *guardar;
	int fd = 0, leerGuardar = 0, contador;
	ssize_t guardarWrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	guardar = malloc(sizeof(char) * letters);
	if (guardar == NULL)
		return (0);

	leerGuardar = read(fd, guardar, letters);
	if (leerGuardar == -1)
	{
		free(guardar);
		return (0);
	}

	close(fd);

	guardarWrite = write(STDOUT_FILENO, guardar, leerGuardar);

	if (guardarWrite == -1)
	{
		free(guardar);
		return (0);
	}

	free(guardar);
	return (guardarWrite);
}
