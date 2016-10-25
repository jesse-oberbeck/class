#include <stdio.h>

int main(void)
{
	for(int i = 1; i < 51; i++){
		if((i % 3 == 0) && (i % 5 == 0)){
			puts("fizzbuzz");
		}else if(i % 3 == 0){
			puts("fizz");
		}else if(i % 5 == 0){
			puts("buzz");
		}else{
			printf("%d\n", i);
		}
	}
}
