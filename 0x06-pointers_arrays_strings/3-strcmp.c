#include "main.h"
/**
 *_strcmp-compare str and dest.
 *@s1:first chain.
 *@s2:Second chain.
 *Return:Returns 0 if text strings are equal, if the first string is greater
 *than the second, it returns a positive number; if the second is greater,
 * it returns a negative value.
*/
int _strcmp(char *s1, char *s2)
{
	int var = 0;

	for (; s1[var] != '\0' && s2[var] != '\0' && s1[var] == s2[var]; var++)
	{
	}
	return (s1[var] - s2[var]);
}
