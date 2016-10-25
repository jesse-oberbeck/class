#include <stdio.h>

int main(int argc, char * argv[])
{
	char * input = argv[1];
	char * output[100];
	char space = ' ';
	printf("argv: %s\n",input);
	for(int i = 0; input[i] != '\0'; i++){
		
		if(((input[i] >= 'a') && (input[i] <= 'z')) || ((input[i] >= 'A') && (input[i] <= 'Z'))){
			output[i] = &input[i];
			printf("%c",input[i]);
		}else{
			output[i] = &space;
		}
	}
	puts(" ");
	printf("Filtered: %s\n", output);
}
