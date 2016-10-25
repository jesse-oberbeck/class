#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	if(argc < 3){
		puts("Give an age, and the number of years the individual has been a citizen.");
		return(1);
	}
	long age = strtol(argv[1], NULL, 10);
	long years_citizen = strtol(argv[2], NULL, 10);
	if((age > 34) && (age == years_citizen)){
		puts("Eligible for presidency.");
	}else{
		puts("Not eligible for presidency.");
	}
	if((age > 29) && (years_citizen > 9)){
		puts("Eligible for senate.");
	}else{
		puts("Not eligible for senate.");
	}
	if((age > 24) && (years_citizen > 7)){
		puts("Eligible for House.");
	}else{
		puts("Not eligible for any.");
	}
}
