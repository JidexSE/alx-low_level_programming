#include "main.h"

/**
 * _strspn - function to match strings from accept with part of s
 * @s: larger string
 * @accept: smaller string
 * Return: an integer number that counts from 1 to where accept stops
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; i++) /*check through the whole string*/
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j]) /* if the strings are equal at i and j*/
			{
				counter += 1; /* add 1 to counter */
			}
		}
		if (s[i] == '\0') /*takes care of an empty accept string, I think*/
			return (counter);
	}
	return (counter);
}
