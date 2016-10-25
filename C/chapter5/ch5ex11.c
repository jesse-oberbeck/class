#include <stdio.h>

int main(void)
{
	long int count = 1, total = 1;
	while(count <= 10){
		total = total * count;
		//printf("%li\n",total);
		count++;
	}
	printf("%li\n", total);
}
