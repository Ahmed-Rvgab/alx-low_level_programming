/*
<<<<<<< HEAD
 *  * File: 0-positive_or_negative.c
 *   * Auth: Brennan D Baraban
 *    */
=======
 * File: 0-positive_or_negative.c
 * Auth: Brennan D Baraban
 */
>>>>>>> d40a2d401b5adff6514e3b3604a5aa2a79062f11

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 *  * main - Prints a random number and states whether
 *   *        it is positive, negative, or zero.
 *    *
 *     * Return: Always 0.
 *     */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;

					if (n > 0)
								printf("%d is positive\n", n);
						else if (n < 0)
									printf("%d is negative\n", n);
							else
										printf("%d is zero\n", n);

								return (0);
=======
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
>>>>>>> d40a2d401b5adff6514e3b3604a5aa2a79062f11
}
