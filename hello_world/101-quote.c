#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art", strlen("and that piece of art"));
	write(2, " is useful\" - ", strlen(" is useful\" - "));
	write(2, "Dora Korpar, 2015-10-19\n", strlen("Dora Korpar, 2015-10-19\n"));
	return (1);
}
