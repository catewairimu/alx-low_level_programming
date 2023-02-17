#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/** 
 * main - print if number is possitive, zero or negative
 * Return: Always (succes)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
       
       	if (n > 0)
	{
		printf("%d is positive\n", n);
	} 
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else (n < 0) 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
