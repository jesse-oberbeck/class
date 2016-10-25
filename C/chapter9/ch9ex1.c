#include <stdio.h>

struct money{
	int dollars;
	int cents;
}

struct money init(int dollars, int cents);

struct money add(struct money a, struct money b);
{ 
	int dollars = a.dollars + b.dollars;
	int cents = a.cents + b.cents;
	if(cents > 99){
		int remaining_cents = cents - 100;
		int dollars_in_change = 100 - remaining_cents;
		cents = remaining_cents;
		dollars += dollars_in_change;
	}
	struct money new_money = init(dollars, cents);
	return(new_money);
}

struct money init(int dollars, int cents)
{
	struct money cash;
	cash.dollars = dollars;
	cash.cents = cents;
	return(cash);
}

int main(void)
{
	
}
