#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int bango = 0;
	int hajimeru =0, l = 0;

	if (b == NULL)
		return (0);

	while (b[l])
		l++;

	while (l--)
	{
		if (b[l] == '1')
			bango += (1 << hajimeru);
		else if (b[l] != '0')
			return (0);
		hajimeru++;
	}

	return (bango);
}
