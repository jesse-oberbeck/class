#ifndef CARD_H
#define CARD_H

#include <stdbool.h>
#include <stdlib.h>

// `struct name` is the new name of the storage class
struct card {
	// These are the fields of the structure
	int rank;
	char suit[9];
};


bool card_format(char output[], size_t sz, struct card c);

#endif
