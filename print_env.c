#include "main.h"
/**
 * print_env - prints environment variables (one per line)
 */
void print_env(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
