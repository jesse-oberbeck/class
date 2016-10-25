#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL) + clock());
	int outcome = rand() % 52;
	printf("%d\n",outcome);
	return outcome;
}
