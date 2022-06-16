#include "monty.h"

void h_error(char *message, char *variable)
{
	if (!var_1)
	{
		dprintf(STDERR_FILENO, message, var_2);
	}
	else
	{
		dprintf(STDERR_FILENO, message, var_1, var_2);
	}
	exit(EXIT_FAILURE);
}
