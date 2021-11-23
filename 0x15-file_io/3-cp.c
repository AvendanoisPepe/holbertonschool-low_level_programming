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
	int SinoLe, Sicrear, LeGuar, cerrar, cerrar2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	SinoLe = open(argv[1], O_RDONLY);
	if (SinoLe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	Sicrear = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((LeGuar = read(SinoLe, limite, 1024)) > 0)
	{
		if (Sicrear < 0 || (write(Sicrear, limite, LeGuar) != LeGuar))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (LeGuar == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}
	cerrar = close(Sicrear);
	if (cerrar == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", Sicrear);
		exit(100);
	}
	cerrar2 = close(SinoLe);
	if (cerrar2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", SinoLe), exit(100);
	}
	return (0);
}
