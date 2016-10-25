#ifndef DECK_H
#define DECK_H

#include <stdlib.h>
#include "card.h"

struct deck {
	struct card cards[52];
};


struct deck deck_create(void);

void deck_shuffle(struct deck d);

void deck_deal(struct deck d, struct card[], size_t amount);

void deck_shuffle(struct deck d);

//struct deck deck_deal(struct deck d, struct card hand[], size_t amt);

#endif
