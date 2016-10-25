#include "card.h"
#include <stdio.h>
#include <string.h>

// Structures can be passed as parameters
bool card_format(char output[], size_t sz, struct card c)
{
	if(sz < 18) {
		return false;
	}

	switch(c.rank) {
		case 14:
			snprintf(output, sz, "Ace");
			break;
		case 13:
			snprintf(output, sz, "King");
			break;
		case 12:
			snprintf(output, sz, "Queen");
			break;
		case 11:
			snprintf(output, sz, "Jack");
			break;
		default:
			snprintf(output, sz, "%d", c.rank);
	}

	strncat(output, " of ", sz - strlen(output) - 1);
	strncat(output, c.suit, sz - strlen(output) - 1);

	return true;
}
