#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int vertical_array[101];
	int horizontal_array[101];
	long int upper_bound = 10;
	long int lower_bound = 1;
	if(argc == 2){
		upper_bound = strtol(argv[1], NULL, 10);
	}else if(argc == 3){
		upper_bound = strtol(argv[2], NULL, 10);
		lower_bound = strtol(argv[1], NULL, 10);
	}
	//printf("%ld\n",upper_bound);
	for(int x = 0; x <= upper_bound; x++){
		vertical_array[x] = x;
		horizontal_array[x] = x;
		//printf("%d   ",x);
	}
	
	int vertical_index = 0;
	int horizontal_index = 0;
	for(int vert = lower_bound - 1; vert <= upper_bound; vert++){
		if(vert == lower_bound - 1){
			printf("*\t");
			int index = vert+1;
			while(index <= upper_bound){
				printf("%d!\t",horizontal_array[index]);
				index++;
			}
		}else{
			printf("%d!!\t", vertical_array[vert]);
		
			vertical_index = vert;
			for(int horiz = lower_bound; horiz <= upper_bound; horiz++){
				horizontal_index = horiz;
				printf("%d\t", vertical_array[vertical_index] * horizontal_array[horizontal_index]);
				}

		
	}
	puts("");
	}
}
