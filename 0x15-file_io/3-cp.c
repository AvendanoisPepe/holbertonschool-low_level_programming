#include "main.h"
/**
 * main - Copia el contenido de un archivo a otro.
 * @argc: Recuento de argumentos.
 * @argv: Vector de argumentos.
 * Return: 0 si funciona.
 */
int main(int argc, char *argv[])
{
	char limite[1024];
	int SinopuedoLeer, SinopuedeCrear, leerGuardar, cerrar, cerrar2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	SinopuedoLeer = open(argv[1], O_RDONLY);
	if (SinopuedoLeer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	SinopuedeCrear = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((leerGuardar = read(SinopuedoLeer, limite, 1024)) > 0)
	{
		if (SinopuedeCrear < 0 || (write(SinopuedeCrear, limite, leerGuardar) != leerGuardar))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		
	}

	if (leerGuardar == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}

	cerrar = close(SinopuedeCrear);
	if (cerrar == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", SinopuedeCrear);
		exit(100);
	}
	cerrar2 = close(SinopuedoLeer);
	if (cerrar2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", SinopuedoLeer);
		exit(100);
	}
	return (0);
}
