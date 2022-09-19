#include "main.h"

/**
 * rev_string -> reversing the string
 * using parameter s
 */
void rev_string(char *s)
{
	char tmp;
	int i, lenght1, lenght2;

	lenght1 = 0;
	lenght2 = 0;

	while (s [lenght1] != '\0')
		lenght1++;

	lenght2 = lenght1 - 1;
	for (i = 0; i < lenght1 / 2;  i++)
	{
		tmp = s[i];
		s[i] = s[lenght1];
		s[lenght2] = tmp;
		lenght2 -= 1;
	}
}
