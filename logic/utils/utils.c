#include "utils.h"
#include <stdlib.h>
#include <memory.h>


void resize(char ** pointer, int size) {
	*pointer = (char *) realloc(*pointer, sizeof(char) * size);
}