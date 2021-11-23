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
	int SinopuedoLeer, SinopuedeCrear, leerGuardar, guardarWrite, cerrar;

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
	leerGuardar = read(SinopuedoLeer, limite, 1024);
	if (leerGuardar == -1)
		return (-1);

	SinopuedeCrear = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (SinopuedeCrear == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	guardarWrite = write(SinopuedeCrear, limite, leerGuardar);
	if (guardarWrite == -1)
		return (-1);
	cerrar = close(SinopuedeCrear);
	if (SinopuedeCrear == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", SinopuedeCrear);
		exit(100);
	}
	cerrar = close(SinopuedoLeer);
	if (SinopuedoLeer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", SinopuedoLeer);
		exit(100);
	}
	return (0);
}
