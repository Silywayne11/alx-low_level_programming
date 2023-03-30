#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * first - A funtion that prints before main
 *        function is executed.
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
