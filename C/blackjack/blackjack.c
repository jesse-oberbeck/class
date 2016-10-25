#include <stdio.h>
#include "card.h"
#include "deck.h"

int blackjack_score(struct card hand[], size_t amt){
	int total = 0;
	for(size_t i = 0; i < amt; i++){
		total += hand[i].rank;
	}
	return(total);
}

int main(void)
{
	struct card hand[4];
	struct deck pile = deck_create();

	/*
	char buf[18];

	for(int n = 0; n < 52; ++n) {
		card_format(buf, sizeof(buf), pile.cards[n]);

		puts(buf);
	}*/

	deck_shuffle(&pile);

	deck_deal(pile, hand, 2);
	for(int i = 0; i < 2; i++){
		printf("%d of ", hand[i].rank);
		printf("%s\n",hand[i].suit);
		
	}
	int score = blackjack_score(hand, 2);
	printf("Score: %d\n", score);
}
