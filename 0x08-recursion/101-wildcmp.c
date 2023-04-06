#include "main.h"

/**
 * wildcmp - Compare strings
 * @m1: pointer to string params
 * @m2: pointer to string params
 * Return: 0
 */

int wildcmp(char *m1, char *m2)
{
	if (*m1 == '\0')
	{
		if (*m2 != '\0' && *m2 == '*')
		{
			return (wildcmp(m1, m2 + 1));
		}
		return (*m2 == '\0');
	}

	if (*m2 == '*')
	{
		return (wildcmp(m1 + 1, m2) || wildcmp(m1, m2 + 1));
	}
	else if (*m1 == *m2)
	{
		return (wildcmp(m1 + 1, m2 + 1));
	}
	return (0);
}
