#include "main.h"
/**
 * append_text_to_file - Agrega texto al final de un archivo.
 * @text_content: Cadena que se agrega al final.
 * @filename:Nombre del archivo a crear.
 * Return:1 si funciona, -1 si falla.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int guardar;
	int guardarWrite;
	int largito = 0;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		for (largito = 0; text_content[largito] != '\0'; largito++)
			;
	}

	guardar = open(filename, O_WRONLY | O_APPEND);
	guardarWrite = write(guardar, text_content, largito);

	if (guardarWrite == -1)
	{
		return (-1);
	}

	close(guardar);
	return (1);
}
