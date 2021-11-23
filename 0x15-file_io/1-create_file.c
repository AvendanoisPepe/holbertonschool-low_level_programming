#include "main.h"
/**
 * create_file - Crea un archivo y lo llena.
 * @filename: Nombre del archivo.
 * @text_content: Texto para el archivo.
 * Return:1 si sirve, -1 si falla.
 */
int create_file(const char *filename, char *text_content)
{
	int creando;
	int guardarWrite;
	int contador = 0;

	if (text_content != NULL)
	{
		for (contador = 0; text_content[contador]; contador++)
			;
	}

	creando = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	guardarWrite = write(creando, text_content, contador);

	if (creando == -1 || guardarWrite == -1)
	{
		return (-1);
	}

	close(creando);
	return (1);
}
