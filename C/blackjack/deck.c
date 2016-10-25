#include "deck.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

struct deck deck_create(void)
{
	struct deck d;
	for(int s = 0; s < 4; ++s) {
		for(int rank = 2; rank < 15; ++rank) {
			size_t i = s*13 + (rank - 2);

			switch(s) {
				case 0:
					strncpy(d.cards[i].suit, "Clubs", sizeof(d.cards[i].suit));
					break;
				case 1:
					strncpy(d.cards[i].suit, "Diamonds", sizeof(d.cards[i].suit));
					break;
				case 2:
					strncpy(d.cards[i].suit, "Hearts", sizeof(d.cards[i].suit));
					break;
				case 3:
					strncpy(d.cards[i].suit, "Spades", sizeof(d.cards[i].suit));
					break;
			}

			d.cards[i].rank = rank;
		}
	}

	return d;
}

int random52(void)
{
	srand(time(NULL) + clock());
	int outcome = rand() % 52;
	return(outcome);
}

void deck_shuffle(struct deck d)
{
	int count = 0;
	while(count < 300){
		int location1 = random52();
		int location2 = random52();
		//struct card temp_card;
		struct card card_one = d.cards[location1];
		struct card card_two = d.cards[location2];
		//temp_card = card_one;
		d.cards[location1] = card_two;
		d.cards[location2] = card_one;
		//puts(card_one.suit);
		count++;
	}
}

void deck_deal(struct deck d, struct card hand[], size_t amt)
{
	for(size_t i = 0; i < amt; i++){
		//srand(time(NULL) + clock());
		//int outcome = rand() % 52;
		//printf("%d\n",outcome);
		int outcome = random52();
		hand[i] = d.cards[outcome];
	}
}
