#include <stdio.h>
#include "card.h"
#include "deck.h"

int main(void)
{
	struct card hand[4];
	struct deck pile = deck_create();
	char buf[18];

	for(int n = 0; n < 52; ++n) {
		card_format(buf, sizeof(buf), pile.cards[n]);

		//puts(buf);
	}
	deck_deal(pile, hand, 2);
	for(int i = 0; i < 2; i++){
		printf("%d of ", hand[i].rank);
		printf("%s\n",hand[i].suit);
		
	}
}
