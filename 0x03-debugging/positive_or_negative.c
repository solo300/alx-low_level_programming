#include "main.h"
 /**
 * positive_or_negative - checks for positive or negative numbers
 *
 * @i: the number to be checked
 *
 * return: always 0
 */


void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else if  (i == 0)
		printf("%d is zero\n", i);


}
