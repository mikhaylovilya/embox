/**
 * @file gets.c
 * @brief TODO
 *
 * @date 14.02.2010
 * @author Eldar Abusalimov
 */

#include <stdio.h>
#include <types.h>

char *gets(char *s) {
	int c;
	char *ptr;

	if (EOF == (c = getchar())) {
		return NULL;
	}
	for (ptr = s; c != '\n' && c != EOF; c = getchar()) {
		*ptr++ = c;
	}
	*ptr = 0;

	return s;
}
